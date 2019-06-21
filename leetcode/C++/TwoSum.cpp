#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution1
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int length=nums.size();
        vector<int> res;
        for (int i = 0; i < length; i++)
        {
            int num = target - nums[i];
            for (int j = i+1; j < length; j++)
            {
                if(num==nums[j]){
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
            
        }
        return res;
    }
};

class Solution2
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int length = nums.size();
        map<int,int> dict;
        vector<int> res;
        for (int i = 0; i < length; i++)
        {
            int num = target - nums[i];
            if (dict.count(num)!=0)
            {
                res.push_back(dict[num]);
                res.push_back(i);
                return res;
            }
            dict[nums[i]]=i;
        }
        return res;
    }

};

int main(int argc,char **argv,char **envp){
    int n;
    while (cin>>n)
    {
        vector<int> nums;
        int num,target;
        for(int i=0;i<n;i++){
            cin>>num;
            nums.push_back(num);
        }
        cin>>target;
        // vector<int> res = Solution1().twoSum(nums, target);
        vector<int> res=Solution2().twoSum(nums,target);
        for(vector<int>::iterator iter=res.begin();iter!=res.end();iter++){
            cout<<*iter<<endl;
        }
    }
    return 0;
}