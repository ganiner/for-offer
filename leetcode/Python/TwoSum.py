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

def main():
    while 1:
        nums=[int(x) for x in input().split()]
        target=int(input())
        # print(Solution1().twoSum(nums,target))
        print(Solution2().twoSum(nums, target))

if __name__ == "__main__":
    main()
