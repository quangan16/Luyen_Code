using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;


   
        
  
  public class ListNode2 {
      public int val;
      public ListNode2 next;
      public ListNode2(int val=0, ListNode2 next=null) {
          this.val = val;
          this.next = next;
      }
  }
 

public class Solution {    
    public ListNode2 MergeKLists(ListNode2[] lists) {
       if(lists == null || lists.Length <= 0) return new ListNode2();
        while(lists.Length> 1){
             List<ListNode2> mergedLists = new List<ListNode2>();
            for(int i = 0; i < lists.Length; i += 2){
                if(i + 1 < lists.Length){
                     mergedLists.Add(MergeList(lists[i], lists[i + 1]));
                }
                else{
                    mergedLists.Add(lists[i]);
                }
            
            }
            lists = mergedLists.ToArray();
        }
        return lists[0];
       
    }

    public ListNode2 MergeList(ListNode2 l1, ListNode2 l2){
        ListNode2 dummy = new ListNode2();
        ListNode2 current = dummy;
        while(l1 != null && l2 != null){
            if(l1.val <=l2.val){
                current.next = l1;
                l1 = l1.next;
            }
            else{
                current.next = l2;
                l2 = l2.next;
            }
            current = current.next;
        }
        if(l1 != null){
            current.next = l1;
        }
        else if(l2!= null){
            current.next = l2;
        }
        return dummy.next;
    }
};

    }
