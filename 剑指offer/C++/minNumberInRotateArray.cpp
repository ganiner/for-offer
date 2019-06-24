#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int minNumberInRotateArray(vector<int> rotateArray)
    {
        int len = rotateArray.size();
        if (len == 0)
        {
            return 0;
        }
        int res = 0;
        for (int i = 1; i < len; i++)
        {
            if (rotateArray[i - 1] > rotateArray[i])
            {
                res = rotateArray[i];
                break;
            }
            else
            {
                res = rotateArray[0];
            }
        }
        return res;
    }
};

int main(int argc,char **argv,char **envp){
    int n,val;
    vector<int> v;
    while (cin>>n)
    {
        v.clear();
        for (int i = 0; i < n; i++)
        {
            cin>>val;
            v.push_back(val);
        }
        cout<<Solution().minNumberInRotateArray(v)<<endl;
    }
    return 0;
}