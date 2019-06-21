#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/*
 * 执行错误？？？编译错误？？？
 */
int *twoSum(int *nums, int numsSize, int target)
{
    int *returnSize = (int *)malloc(2 * sizeof(int));
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
        int target;
        scanf("%d",&target);
        int *res=twoSum(nums,numsSize,target);
        printf("%d,%d\n", res[0], res[1]);
        free(res);
    }
    return 0;
}