#include <iostream>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL)
    {
    }
};

/*
 * 遍历,从头扫到尾,逐个装入vector中,最后反转vector
 */
class Solution
{
public:
    vector<int> printListFromTailToHead(ListNode *head)
    {
        vector<int> res;
        while (head != NULL)
        {
            res.push_back(head->val);
            head = head->next;
        }
        reverse(res.begin(), res.end());
        return res;
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
        vector<int> res = Solution().printListFromTailToHead(p->next);
        for (vector<int>::iterator iter = res.begin(); iter != res.end(); iter++)
        {
            cout << (*iter) << endl;
        }
    }
    return 0;
}