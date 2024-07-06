
public class SolutionIS
{
    //Function to insert an element at the given index in the array.
    public void insert(int[] arr, int i)
    {
        int j = i - 1;
        int temp = arr[i];
        while(j >= 0 && arr[i] < arr[j]){
            Swap(ref arr[i],ref arr[j]);
            i--;
            --j;
        }
        arr[j + 1] = temp;
        
    }
    
    //Function to sort the array using insertion sort algorithm.
    public void insertionSort(int[] arr, int n)
    {
        for(int i = 1; i < arr.Length - 1; i++){
            insert(arr, i);
        }
    }
    public void Swap(ref int a,ref int b){
        int temp = a;
        a = b;
        b = temp;
    }
}