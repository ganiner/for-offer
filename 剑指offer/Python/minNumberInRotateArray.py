#!/usr/local/bin/python3.7
# -*- coding:utf-8 -*-

# 偷懒,差点超时
class Solution1:
    def minNumberInRotateArray(self, rotateArray):
        # write code here
        return min(rotateArray)


class Solution2:
    def minNumberInRotateArray(self, rotateArray):
        # write code here
        return min(rotateArray)

def main():
    while 1:
        rotateArray = [int(x) for x in input().split()]
        print(Solution1().minNumberInRotateArray(rotateArray))

if __name__=="__main__":
    main()
