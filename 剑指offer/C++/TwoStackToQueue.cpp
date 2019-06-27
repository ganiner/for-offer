#include <iostream>
#include <stack>

using namespace std;

/*
 * 常规操作
 */
class Solution
{
public:
    void push(int node)
    {
        this->stack1.push(node);
    }

    int pop()
    {
        if (stack1.empty() && stack2.empty())
        {
            return 0;
        }
        else if (stack2.empty())
        {
            while (!stack1.empty())
            {
                int val = stack1.top();
                stack1.pop();
                stack2.push(val);
            }
        }
        int res = stack2.top();
        stack2.pop();
        return res;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};

int main(int argc, char **argv, char **envp)
{
    return 0;
}
