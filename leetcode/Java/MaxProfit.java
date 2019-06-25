import java.util.Scanner;

/*
 * 暴力破解,双重循环
 */
class Solution1 {
    public int maxProfit(int[] prices) {
        int temp = 0,result = 0;
        int length = prices.length;
        for (int i = 0; i < length-1; i++) {
            for (int j = i+1; j < length; j++) {
                temp = prices[j]-prices[i];
                if(temp > result){
                    result = temp;
                }
            }
        }
        return result;
    }
}

/*
 * 动态规划
 * 求出序列两两之间的差值,然后开始累加,如果累加和为负数,说明这不是最佳适合的买入点,可以清零,从后继续开始,找到累加和的最大值,更新即可
 * 时间复杂度为0(N),空间复杂度为0(1)
 */
class Solution2 {
    public int maxProfit(int[] prices) {
        int length = prices.length;
        int res = 0,temp = 0;
        for (int i = 1; i < length; i++) {
            temp += prices[i]-prices[i-1];
            if(temp > res){
                res = temp;
            }else if(temp < 0){
                temp = 0;
            }
        }
        return res;
    }
}

public class MaxProfit{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while(in.hasNext()){
            int n = in.nextInt();
            int []prices = new int[n];
            for (int i = 0; i < n; i++) {
                prices[i]=in.nextInt();
            }
            System.out.println(new Solution1().maxProfit(prices));
            // System.out.println(new Solution2().maxProfit(prices));
        }
    }
}