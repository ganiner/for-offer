#!/usr/local/bin/python3.7
# -*- coding:utf-8 -*-
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# 遍历链表并存到栈中,再把栈中数据存到新链表
class Solution:
    # 返回ListNode
    def ReverseList(self, pHead):
        # write code here
        res = ListNode(0)
        head = res
        lis = []
        while pHead != None:
            lis.append(pHead.val)
            pHead = pHead.next
        while len(lis) != 0:
            res.next = ListNode(lis.pop())
            res=res.next
        return head.next


def main():
    while 1:
        vals = [int(x) for x in input().split()]
        listNode = ListNode(vals[0])
        l = listNode
        for i in range(1, len(vals)):
            listNode.next = ListNode(vals[i])
            listNode = listNode.next
        res = Solution().ReverseList(l)
        while res != None:
            print(res.val)
            res = res.next


if __name__ == "__main__":
    main()
