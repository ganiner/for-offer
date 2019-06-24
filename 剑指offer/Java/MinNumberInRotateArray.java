import java.util.ArrayList;

class Solution {
    public int minNumberInRotateArray(int[] array) {
        int len = array.length;
        if(len == 0){
            return 0;
        }
        int res = 0;
        for (int i = 1; i < len; i++) {
            if(array[i]<array[i-1]){
                res=array[i];
                break;
            }else{
                res=array[0];
            }
        }
        return res;
    }
}

public class MinNumberInRotateArray{
    public static void main(String[] args) {
        
    }
}