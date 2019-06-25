package main

import "fmt"

func maxProfit(prices []int) int {
	length := len(prices)
	fmt.Println(length)
	res, temp := 0, 0
	for i := 1; i < length; i++ {
		temp += prices[i] - prices[i-1]
		if temp > res {
			res = temp
		} else if temp < 0 {
			temp = 0
		}
	}
	return res
}

func main() {
	var count int
	for {
		n, _ := fmt.Scanf("%d", &count)
		if n != 1 {
			break
		}
		prices := make([]int, count)
		for i := 0; i < count; i++ {
			_, _ = fmt.Scanf("%d", &prices[i])
		}
		fmt.Println(maxProfit(prices))
	}
}
