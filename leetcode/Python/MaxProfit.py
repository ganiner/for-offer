#!/usr/local/bin/python3.7
class Solution1:
    def maxProfit(self, prices: list) -> int:
        return 0


class Solution2:
    def maxProfit(self, prices: list) -> int:
        return 0

def main():
    while 1:
        prices=[int(price) for price in input().split()]
        print(Solution1().maxProfit(prices))
        # print(Solution2().maxProfit(prices))

if __name__=="__main__":
    main()
