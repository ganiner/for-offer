#!/usr/local/bin/python3.7
# -*- coding:utf-8 -*-
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

# 遍历一遍,把所有结点存到列表中,返回从列表索引的结点
class Solution1:
    def FindKthToTail(self, head, k):
        s = []
        while head != None:
            s.append(head)
            head = head.next
        if len(s) == 0 or len(s) < k or k == 0:
            return None
        return s[-1*k]

# 两个指针,其中一个指针先走k-1步,之后两个指针一起走,直到第一个指针走到顶
class Solution2:
    def FindKthToTail(self,head,k):
        if head == None or k==0:
            return None
        pre = head
        last = head
        for _ in range(1,k):
            if pre != None:
                pre = pre.next
            else:
                return None
        if pre == None:
            return None
        while pre.next != None:
            pre = pre.next
            last = last.next
        return last

def main():
    while 1:
        vals = [int(x) for x in input().split()]
        listNode = ListNode(vals[0])
        l = listNode
        for i in range(1, len(vals)):
            listNode.next = ListNode(vals[i])
            listNode = listNode.next
        k = int(input())
        # res = Solution1().FindKthToTail(l,k)
        res = Solution2().FindKthToTail(l, k)
        while res != None:
            print(res.val)
            res = res.next
    
if __name__=="__main__":
    main()

