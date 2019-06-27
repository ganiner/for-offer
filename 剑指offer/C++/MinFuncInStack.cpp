#include <iostream>
#include <stack>

using namespace std;

/*
 * 左神书上的方法1
 * 开两个栈,一个存输入的数据,一个存最小数
 * minStack不填满
 */
class Solution1
{
private:
    stack<int> datas;
    stack<int> mins;

public:
    void push(int value)
    {
        if (this->mins.empty())
        {
            this->mins.push(value);
        }
        else if (value <= this->mins.top())
        {
            this->mins.push(value);
        }
        this->datas.push(value);
    }
    void pop()
    {
        if (this->datas.empty())
        {
            return;
        }
        int val = this->datas.top();
        this->datas.pop();
        if (val == this->mins.top())
        {
            this->mins.pop();
        }
    }
    int top()
    {
        return this->datas.top();
    }
    int min()
    {
        int res = 0;
        if (!this->mins.empty())
        {
            res = this->mins.top();
        }
        return res;
    }
};

/*
 * 左神书上的方法2
 * 同两个stack
 * minStack填满
 */
class Solution2
{
private:
    stack<int> datas;
    stack<int> mins;

public:
    void push(int value)
    {
        if (this->mins.empty())
        {
            this->mins.push(value);
        }
        else if (value <= this->mins.top())
        {
            this->mins.push(value);
        }
        else
        {
            int min = this->mins.top();
            this->mins.push(min);
        }
        this->datas.push(value);
    }
    void pop()
    {
        if (this->datas.empty())
        {
            return;
        }
        this->datas.pop();
        this->mins.pop();
    }
    int top()
    {
        return this->datas.top();
    }
    int min()
    {
        int res = 0;
        if (!this->mins.empty())
        {
            res = this->mins.top();
        }
        return res;
    }
};

int main(int argc, char **argv, char **envp)
{
    return 0;
}
