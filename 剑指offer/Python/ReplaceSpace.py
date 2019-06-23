#!/usr/bin/python
# -*- coding:utf-8 -*-

# 用python自带的方法(太偷懒了)
class Solution:
    # s 源字符串
    def replaceSpace(self, s):
        return s.replace(" ", "%20")

def main():
    while 1:
        s=input()
        print(Solution().replaceSpace(s))

if __name__=="__main__":
    main()