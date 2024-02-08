using DG.Tweening;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using Unity.VisualScripting;
using UnityEditor;
using UnityEngine;
using UnityEngine.EventSystems;

public class FollowMousePos : MonoBehaviour,  IPointerDownHandler, IPointerUpHandler
{
    [SerializeField]
    public Grid grid;
    public float value;
    public bool putted;
    public Vector3 prePos;
    public Vector3 prePosAfterDestroy;
    public bool rightPlace;
    public bool collided;
    public bool collidedWithObstacle = false;
    public bool merge;
    public GameObject objRange;
    public HeroRange heroRange;
    public PlantBase plantBase;
    public InputManager inputManager;
    private float offset = -3.9f;
    public bool onDrag = false;
    public Transform otherTransform;
    public GameObject otherObj;

    public GameObject shadow;
    private GameObject shadowObj;
    public bool inBound;
    [SerializeField] private ParticleSystem vfxMerge;

    private UiManagerInGame uiManagerInGame;

    private void OnEnable()
    {
        uiManagerInGame = UiManagerInGame.instance;
        collided = false;
        putted = false;
        rightPlace = true;
        inBound = false;
        merge = false;
        otherObj = null;
        otherTransform = null;
        prePos = Vector3.zero;
        inputManager = GameObject.Find("InputManager").GetComponent<InputManager>();
        grid = inputManager.grid;
        heroRange.OnMaterial();
    }

    private void Update()
{
    if (Input.touchCount > 0)
    {
        Touch touch = Input.GetTouch(0);

        if (touch.phase == TouchPhase.Began)
        {
            OnTouchBegan();
        }
        else if (touch.phase == TouchPhase.Ended)
        {
            OnTouchEnded();
        }
    }

    DragFromUI();
}

public void OnTouchBegan()
{
    if (!PanelWarninging())
        {
            heroRange.OnMaterial();
            shadowObj = Instantiate(shadow, transform.position, Quaternion.identity);
        }
}

public void FolMousePos()
{
    if (!GameManager.Instance.isFighting && !PanelWarninging() && Input.touchCount > 0)
    {
        Vector3 touchPosition = Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position);
        Vector3Int gridPosition = grid.WorldToCell(touchPosition);
        transform.position = grid.CellToWorld(gridPosition) + new Vector3(0.5f, offset, 0.5f);
        CheckHasPath();
    }
}

public void OnTouchEnded()
{
     if (!putted)
        {
            if (!rightPlace || inBound)
            {
                transform.Translate(0, 100, 0);
                DOVirtual.DelayedCall(0.1f, () => { ObjectPool.instance.Return(gameObject); });
            }
            else if (rightPlace && merge)
            {
                Merge();
            }
        }

        if (putted == false)
        {
            vfxMerge.Play();
            putted = true;
        }

        if (rightPlace)
        {
            prePos = transform.position;
            DOVirtual.DelayedCall(0.3f, () => { prePosAfterDestroy = prePos; });
        }

        heroRange.OffMaterial();
        if (otherTransform != null)
        {
            otherTransform.position = prePos;
        }
        else if (merge)
        {
            Merge();
        }
        else if (!PathFinding.Instance.HasAllPath(PathFinding.Instance.shortestPathList) && rightPlace)
        {
            Invoke("DelayedCreatePlant", 0.12f);
            transform.Translate(0, 50, 0);
            DOVirtual.DelayedCall(0.08f, () => { ObjectPool.instance.Return(gameObject); });
        }
        else if ((!rightPlace || inBound))
        {
            transform.position = prePos;
        }


        if (!PathFinding.Instance.HasAllPath(PathFinding.Instance.shortestPathList) && !rightPlace)
        {
            uiManagerInGame.ShowWarning(1);
            DOVirtual.DelayedCall(1f, () => { uiManagerInGame.ShowWarning(1); });
        }
        else if (PathFinding.Instance.HasAllPath(PathFinding.Instance.shortestPathList) && !rightPlace)
        {
            uiManagerInGame.ShowWarning(0);
            DOVirtual.DelayedCall(1f, () => { uiManagerInGame.ShowWarning(0); });
        }
        Destroy(shadowObj);
}
    public void DragFromUI()
    {
        if (!putted)
        {
            FolMousePos();
        }

       
    }

   

   
    

    public GameObject DelayedCreatePlant()
    {
        GameObject newPlant = ObjectPool.instance.Get(ObjectPool.instance.plants[0].array[0]);
        newPlant.SetActive(true);
        FollowMousePos newFolMouPos = newPlant.GetComponent<FollowMousePos>();
        newFolMouPos.merge = false;
        newFolMouPos.rightPlace = true;
        newFolMouPos.putted = true;
        newFolMouPos.heroRange.OffMaterial();
        newPlant.transform.position = prePosAfterDestroy;
        newFolMouPos.prePosAfterDestroy = transform.position;
        newFolMouPos.prePos = transform.position;
        return newPlant;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Obstacle"))
        {
            collided = true;
            collidedWithObstacle = true;
            SetRightPlace(false);
        }
        else if (other.gameObject.CompareTag("Hero") && (DataPersist.playerData.tutorialing || DataPersist.playerData.endedTutorial))
        {
            FollowMousePos otherfollowPos = other.gameObject.GetComponent<FollowMousePos>();
            PlantBase thisPlantBase = plantBase;
            PlantBase otherPlantBase = otherfollowPos.plantBase;

            if (thisPlantBase.level == otherPlantBase.level && thisPlantBase.index == otherPlantBase.index)
            {
                merge = true;
                otherObj = other.gameObject;
            }
            else
            {
                if (DataPersist.playerData.endedTutorial)
                {
                    merge = false;
                    otherTransform = other.gameObject.transform;
                }
            }
            if (!merge && !putted)
            {
                collided = true;
                SetRightPlace(false);
            }
        }
        if (other.gameObject.CompareTag("Bound"))
        {
            inBound = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Obstacle"))
        {
            SetRightPlace(true);
            collided = false;
            collidedWithObstacle = false;
        }
        else if (other.gameObject.CompareTag("Hero") && putted)
        {
            merge = false;
            otherObj = null;
            otherTransform = null;
        }
        else if (other.gameObject.CompareTag("Hero") && !putted)
        {
            merge = false;
            otherObj = null;
            otherTransform = null;
            collided = false;
            SetRightPlace(true);
        }


        if (other.gameObject.CompareTag("Bound"))
        {
            inBound = false;
        }
    }

    public void SetRightPlace(bool value)
    {
        rightPlace = value;
        if (rightPlace)
        {
            heroRange.ChangeMaterialGreen();
        }
        else
        {
            heroRange.ChangeMaterialRed();
        }
    }

    public void CheckHasPath()
    {
        PathFinding pathFinding = PathFinding.Instance;
        if (!collided)
        {
            if (!pathFinding.HasAllPath(pathFinding.shortestPathList))
            {
                SetRightPlace(false);
            }
            else
            {
                SetRightPlace(true);
            }
        }
    }

    public void Merge()
    {
        int levelCheck = plantBase.level += 1;
        if (levelCheck <= 4)
        {
            GameObject newPlant = ObjectPool.instance.GetFromObjectPool(ObjectPool.instance.plants[plantBase.index].array[levelCheck], transform.position);
            FollowMousePos newFollowMouse = newPlant.GetComponent<FollowMousePos>();
            PlantBase newPlantBase = newFollowMouse.plantBase;
            newPlantBase.level = levelCheck;
            newFollowMouse.heroRange.OffMaterial();
            newFollowMouse.putted = true;
            newFollowMouse.prePos = newPlantBase.transform.position;
            newFollowMouse.vfxMerge.Play();
            ObjectPool.instance.Return(otherObj);
            ObjectPool.instance.Return(gameObject);
        }
    }
    public bool PanelWarninging()
    {
        if (uiManagerInGame.panelWarning[0].activeSelf || uiManagerInGame.panelWarning[1].activeSelf)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}