#!/usr/bin/python
# -*- coding:utf-8 -*-

# 利用python的in关键字判断target是否存在
class Solution1:
    # array 二维列表
    def Find(self, target, array):
        for lis in array:
            if target in lis:
                return True
        return False

class Solution2:
    # array 二维列表
    def Find(self, target, array):
        pass

def main():
    array=[
        [1,2,8,9],
        [2,4,9,12],
        [4,7,10,13],
        [6,8,11,15],
    ]
    target = 7
    print(Solution1().Find(target,array))

if __name__=="__main__":
    main()
