import java.util.ArrayList;
import java.util.Collections;

class ListNode {
    int val;
    ListNode next = null;
    
    ListNode(int val) {
        this.val = val;
    }
}


class Solution {
    public ArrayList<Integer> printListFromTailToHead(ListNode listNode) {
        ArrayList<Integer> res = new ArrayList<>();
        while (listNode != null){
            res.add(listNode.val);
            listNode = listNode.next;
        }
        Collections.reverse(res);
        return res;
    }
}

public class PrintListFromTailToHead{
    public static void main(String[] args) {
        
    }
}