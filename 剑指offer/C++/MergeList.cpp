#include <iostream>


struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

class Solution
{
public:
    ListNode *Merge(ListNode *pHead1, ListNode *pHead2)
    {
        ListNode *res = new ListNode(0);
        ListNode *head = res;
        while (pHead1 != NULL && pHead2 != NULL)
        {
            if (pHead1->val <= pHead2->val)
            {
                res->next = new ListNode(pHead1->val);
                pHead1 = pHead1->next;
            } else {
                res->next = new ListNode(pHead2->val);
                pHead2 = pHead2->next;
            }
            res=res->next;
        }
        while (pHead1 != NULL)
        {
            res->next=new ListNode(pHead1->val);
            res=res->next;
            pHead1=pHead1->next;
        }
        while (pHead2 != NULL)
        {
            res->next = new ListNode(pHead2->val);
            res=res->next;
            pHead2=pHead2->next;
        }
        return head->next;
    }
};

int main(int argc,char **argv,char **envp){
    return 0;
}