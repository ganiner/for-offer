#!/usr/local/bin/python3.7

# 超时
class Solution1:
    def maxProfit(self, prices: list) -> int:
        res,t = 0,0
        for i in range(0,len(prices)-1):
            for j in range(i+1,len(prices)):
                t=prices[j]-prices[i]
                if t > res:
                    res = t
        return res


class Solution2:
    def maxProfit(self, prices: list) -> int:
        length = len(prices)
        res,t = 0,0
        for i in range(1,length):
            t += prices[i]-prices[i-1]
            if t > res :
                res = t
            elif t < 0:
                t = 0
        return res

def main():
    while 1:
        prices=[int(price) for price in input().split()]
        # print(Solution1().maxProfit(prices))
        print(Solution2().maxProfit(prices))

if __name__=="__main__":
    main()
