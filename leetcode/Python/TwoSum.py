#!/usr/local/bin/python3.7

# O(n^2)
# 双重循环
class Solution1:
    def twoSum(self, nums: list, target: int) -> list:
        res=list()
        length=len(nums)
        for i in range(0, length):
            num=target-nums[i]
            for j in range(i+1, length):
                if num==nums[j]:
                    res.append(i)
                    res.append(j)
                    break
        return res


# O(n)
# 使用字典,把扫过的num索引存入字典
class Solution2:
    def twoSum(self, nums: list, target: int) -> list:
        dic,length=dict(),len(nums)
        for i in range(0,length):
            num = target - nums[i]
            if num in dic.keys():
                return [dic[num], i]
            dic[nums[i]] = i
        return list()


# O(nlogn)
# 先对nums的索引进行排序,首尾递归,两边扫
class Solution3:
    def twoSum(self,nums:list,target:int) -> list:
        length = len(nums)
        numIndexs = sorted(range(length),key=lambda k:nums[k])
        head,tail = 0,length-1
        sum = nums[numIndexs[head]]+nums[numIndexs[tail]]
        while sum != target:
            if sum > target:
                tail -= 1
            else:
                head += 1
            sum = nums[numIndexs[head]]+nums[numIndexs[tail]]
        return sorted([numIndexs[head], numIndexs[tail]], reverse=False)

def main():
    while 1:
        nums=[int(x) for x in input().split()]
        target=int(input())
        # print(Solution1().twoSum(nums,target))
        print(Solution3().twoSum(nums, target))

if __name__ == "__main__":
    main()
