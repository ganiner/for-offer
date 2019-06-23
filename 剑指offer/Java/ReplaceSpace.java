import java.util.Scanner;

class Solution {
    public String replaceSpace(StringBuffer str) {
        int spaceCount = 0;
        int strLength = str.length();
        for (int i = 0; i < strLength; i++) {
            if (str.charAt(i) == ' ') {
                spaceCount++;
            }
        }
        int oldLength = strLength;
        int newLength = strLength + 2 * spaceCount;
        int oldIndex = oldLength - 1;
        int newIndex = newLength - 1;
        str.setLength(newLength);

        while (oldIndex >= 0 && newIndex > oldIndex) {
            if (str.charAt(oldIndex) == ' ') {
                str.setCharAt(newIndex--, '0');
                str.setCharAt(newIndex--, '2');
                str.setCharAt(newIndex--, '%');
            } else {
                str.setCharAt(newIndex--, str.charAt(oldIndex));
            }
            oldIndex--;
        }
        return str.toString();
    }
}

public class ReplaceSpace {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            String str = in.next();
            StringBuffer stringBuffer = new StringBuffer(str);
            System.out.println(new Solution().replaceSpace(stringBuffer));
        }
    }
}