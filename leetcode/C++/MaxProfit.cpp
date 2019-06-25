#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int length = prices.size();
        int res = 0, temp = 0;
        for(int i=1;i<length;i++){
            temp += prices[i]-prices[i-1];
            if(temp>res){
                res=temp;
            }else if(temp<0){
                temp=0;
            }
        }
        return res;
    }
};

int main(int argc,char **argv,char **envp){
    int n,val;
    while (cin>>n)
    {
        vector<int> prices(n);
        for (int i = 0; i < n; i++)
        {
            cin>>val;
            prices.push_back(val);
        }
        cout<<Solution().maxProfit(prices)<<endl;
    }
    
    return 0;
}