package main

func twoSum1(nums []int, target int) []int {
	length := len(nums)
	res := make([]int, 0)
	for i := 0; i < length; i++ {
		num := target - nums[i]
		for j := i + 1; j < length; j++ {
			if num == nums[j] {
				res = append(res, i)
				res = append(res, j)
				break
			}
		}
	}
	return res
}

/*
 * golang中map[int]int默认值为0,value用interface好判断
 */
func twoSum2(nums []int, target int) []int {
	length := len(nums)
	res := make([]int, 0)
	m := make(map[int]interface{})
	for i := 0; i < length; i++ {
		num := target - nums[i]
		if m[num] != nil {
			res = append(res, m[num].(int))
			res = append(res, i)
			break
		}
		m[nums[i]] = i
	}
	return res
}

/*
func main() {
	var numSize, num, target int
	for {
		nums := make([]int, 0)
		n, _ := fmt.Scanf("%d", &numSize)
		if n != 1 {
			break
		}
		for i := 0; i < numSize; i++ {
			_, _ = fmt.Scanf("%d", &num)
			nums = append(nums, num)
		}
		_, _ = fmt.Scanf("%d", &target)
		// res := twoSum1(nums, target)
		res := twoSum2(nums, target)
		fmt.Printf("%d,%d\n", res[0], res[1])
	}
}
*/
