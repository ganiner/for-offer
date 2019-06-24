#!/usr/local/bin/python3.7
# -*- coding:utf-8 -*-

# 偷懒
class Solution1:
    def minNumberInRotateArray(self, rotateArray):
        # write code here
        return min(rotateArray)


class Solution2:
    def minNumberInRotateArray(self, rotateArray):
        # write code here
        length = len(rotateArray)
        if length == 0:
            return 0
        res = 0
        for i in range(1,length):
            if rotateArray[i-1]>rotateArray[i]:
                res=rotateArray[i]
                break
            else:
                res=rotateArray[0]
        return res

# 先排序,后取值
# 运行时间最大
class Solution3:
    def minNumberInRotateArray(self, rotateArray):
        # write code here
        if len(rotateArray)==0:
            return 0
        return sorted(rotateArray)[0]

def main():
    while 1:
        rotateArray = [int(x) for x in input().split()]
        # print(Solution1().minNumberInRotateArray(rotateArray))
        # print(Solution2().minNumberInRotateArray(rotateArray))
        print(Solution3().minNumberInRotateArray(rotateArray))

if __name__=="__main__":
    main()
