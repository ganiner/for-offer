#!/usr/bin/python
# -*- coding:utf-8 -*-

class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    # 返回从尾部到头部的列表值序列，例如[1,2,3]
      def printListFromTailToHead(self, listNode):
            if listNode == None:
                return []
            res = []
            while listNode != None:
                res.append(listNode.val)
                listNode = listNode.next
            return res[::-1]

def main():
    pass

if __name__=="__main__":
    main()
