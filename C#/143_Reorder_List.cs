

public class ListNode {
    public int val;
    public ListNode next;
    public ListNode(int val=0, ListNode next=null) {
        this.val = val;
        this.next = next;
    }
}

public class Solution143 {
    public void ReorderList(ListNode head) {
        ListNode first = head;
        ListNode second = head;
        int current = 0;
        while(first.next != null && first.next.next != null){
            second = GetSubLastNode(head);
            second.next.next = first.next;
            first.next = second.next;
            second.next = null;
            if( first.next.next != null)  first = first.next.next;
            else break;
          
            
        }

    }
    public ListNode GetSubLastNode(ListNode head){
        
        while(head.next.next != null){
            head = head.next;
        }
        return head;
    }

    public int CountList(ListNode head){
        int count = 0;
        while(head != null){
            ++count;
            head = head.next;
        }
        return count;
    }

   
}