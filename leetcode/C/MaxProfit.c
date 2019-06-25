#include <stdio.h>
#include <stdlib.h>

int maxProfit(int *prices, int pricesSize)
{
    int res=0,temp=0;
    for (int i = 1; i < pricesSize; i++)
    {
        temp += prices[i]-prices[i-1];
        if (temp > res)
        {
            res = temp;
        } else if(temp<0){
            temp = 0;
        }
        
    }
    return res;
}

int main(int argc,char **argv,char **envp){
    int pricesSize;
    while (scanf("%d",&pricesSize)!=EOF)
    {
        int *prices = (int *)malloc(pricesSize*sizeof(int));
        for (int i = 0; i < pricesSize; i++)
        {
            scanf("%d",&prices[i]);
        }
        printf("%d\n",maxProfit(prices,pricesSize));
        free(prices);
    }
    
    return 0;
}
