import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

class Solution1 {
    public int[] twoSum(int[] nums, int target) {
        int length = nums.length;
        int[] res;
        res = new int[2];
        for (int i = 0; i < length; i++) {
            int num = target - nums[i];
            for (int j = i + 1; j < length; j++) {
                if (num == nums[j]) {
                    res[0] = i;
                    res[1] = j;
                    break;
                }
            }
        }
        return res;
    }
}

class Solution2 {
    public int[] twoSum(int[] nums, int target) {
        int length = nums.length;
        int[] res;
        res = new int[2];
        Map<Integer, Integer> map = new HashMap<>(16);
        for (int i = 0; i < length; i++) {
            int num = target - nums[i];
            if(map.get(num)!=null){
                res[0]=map.get(num);
                res[1]=i;
                break;
            }
            map.put(nums[i], i);
        }
        return res;
    }
}

public class TwoSum {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            int n = in.nextInt();
            int[] nums;
            nums = new int[n];
            for (int i = 0; i < n; i++) {
                nums[i] = in.nextInt();
            }
            int target = in.nextInt();
            // int[] res = new Solution1().twoSum(nums, target);
            int[] res = new Solution2().twoSum(nums, target);
            System.out.println(String.format("%d,%d", res[0], res[1]));
        }

    }
}