class ListNode {
    int val;
    ListNode next = null;

    ListNode(int val) {
        this.val = val;
    }
}
class Solution {
    public ListNode Merge(ListNode list1, ListNode list2) {
        ListNode res = new ListNode(0);
        ListNode h = res;
        while(list1!=null && list2!=null){
            if(list1.val<=list2.val){
                res.next = new ListNode(list1.val);
                list1 = list1.next;
            } else {
                res.next = new ListNode(list2.val);
                list2 = list2.next;
            }
            res = res.next;
        }
        while(list1 != null){
            res.next = new ListNode(list1.val);
            list1 = list1.next;
            res=res.next;
        }
        while(list2 != null){
            res.next = new ListNode(list2.val);
            list2 = list2.next;
            res = res.next;
        }
        return h.next;
    }
}

public class MergeList{
    public static void main(String[] args) {
        
    }
}