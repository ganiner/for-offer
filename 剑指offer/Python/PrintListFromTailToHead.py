#!/usr/local/bin/python3 
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
    while 1:
        vals=[int(x) for x in input().split()]
        listNode = ListNode(vals[0]);
        l=listNode
        for i in range(1,len(vals)):
            listNode.next = ListNode(vals[i])
            listNode = listNode.next
        print(Solution().printListFromTailToHead(l))

if __name__=="__main__":
    main()
