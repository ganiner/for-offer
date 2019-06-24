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
    
    return 0;
}