#!/usr/local/bin/python3.7
# -*- coding:utf-8 -*-
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None


class Solution:
    # 返回合并后列表
    def Merge(self, pHead1, pHead2):
        res = ListNode(0)
        h = res
        while pHead1 != None and pHead2 != None:
            if pHead1.val >= pHead2.val:
                res.next = ListNode(pHead2.val)
                res = res.next
                pHead2 = pHead2.next
            else:
                res.next = ListNode(pHead1.val)
                res = res.next
                pHead1 = pHead1.next
        while pHead1 != None:
            res.next = ListNode(pHead1.val)
            res = res.next
            pHead1 = pHead1.next
        while pHead2 != None:
            res.next = ListNode(pHead2.val)
            res = res.next
            pHead2 = pHead2.next
        return h.next

def main():
    while 1:
        vals = [int(x) for x in input().split()]
        listNode = ListNode(vals[0])
        l1 = listNode
        for i in range(1, len(vals)):
            listNode.next = ListNode(vals[i])
            listNode = listNode.next
        vals_t=[int(x) for x in input().split()]
        listNode1 = ListNode(vals_t[0])
        l2 = listNode1
        for i in range(1,len(vals_t)):
            listNode1.next = ListNode(vals_t[i])
            listNode1 = listNode1.next
        # res = Solution1().FindKthToTail(l,k)
        res = Solution().Merge(l1, l2)
        while res != None:
            print(res.val)
            res = res.next

if __name__ == "__main__":
    main()
