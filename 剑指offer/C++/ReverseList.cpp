#include <iostream>
#include <stack>

using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL)
    {
    }
};

class Solution
{
    public:
    ListNode *ReverseList(ListNode *pHead)
    {
        ListNode *h = new ListNode(0);
        ListNode *p = h;
        stack<int> s;
        while (pHead != NULL)
        {
            s.push(pHead->val);
            pHead = pHead->next;
        }
        while (!s.empty())
        {
            h->next = new ListNode(s.top());
            s.pop();
            h = h->next;
        }
        return p->next;
    }
};

int main(int argc, char **argv, char **envp)
{
    int n, val;
    while (cin >> n)
    {
        ListNode *head = new ListNode(0);
        ListNode *p = head;
        while (n--)
        {
            cin >> val;
            head->next = new ListNode(val);
            head = head->next;
        }
        ListNode *res = Solution().ReverseList(p->next);
        while (res != NULL)
        {
            cout<<res->val<<endl;
            res = res->next;
        }
        
    }
    return 0;
}