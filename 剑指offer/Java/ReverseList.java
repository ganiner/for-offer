import java.util.Stack;

class ListNode {
    int val;
    ListNode next = null;

    ListNode(int val) {
        this.val = val;
    }
}
class Solution {
    public ListNode ReverseList(ListNode head) {
        ListNode h = new ListNode(0);
        ListNode p = h;
        Stack<Integer> s=new Stack<>();
        while(head != null){
            s.push(head.val);
            head=head.next;
        }
        while(!s.empty()){
            h.next=new ListNode((Integer)s.pop());
            h=h.next;
        }
        return p.next;
    }
}

public class ReverseList{
    public static void main(String[] args) {
        
    }
}