#!/usr/local/bin/python3.7

class Solution:
    def twoSum(self, nums: list, target: int) -> list:
        res=list()
        l=len(nums)
        for i in range(0,l):
            n=target-nums[i]
            for j in range(i+1,l):
                if n==nums[j]:
                    res.append(i)
                    res.append(j)
                    break
        return res

def main():
    while 1:
        nums=[int(x) for x in input().split()]
        target=int(input())
        print(Solution().twoSum(nums,target))

if __name__ == "__main__":
    main()