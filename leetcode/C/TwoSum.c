#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target,int *returnSize)
{
    returnSize = (int *)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        int num=target-nums[i];
        for (int j = i+1; j < numsSize; j++)
        {
            if (num==nums[j])
            {
                returnSize[0] = i;
                returnSize[1] = j;
                break;
            }
        }
    }
    return returnSize;
}

int main(int argc,char **argv,char **envp){
    int numsSize;
    while (scanf("%d", &numsSize) != EOF)
    {
        int *nums=(int*)malloc(2*sizeof(int));
        for (int i = 0; i < numsSize; i++)
        {
            scanf("%d",&nums[i]);
        }
        int target,*res;
        scanf("%d",&target);
        int *result=twoSum(nums,numsSize,target,res);
        printf("%d,%d\n", result[0], result[1]);
        free(res);
    }
    return 0;
}