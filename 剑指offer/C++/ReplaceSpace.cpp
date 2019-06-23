#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

/*
 * 原书中的方法,时间复杂度O(n)
 * (我居然在判断str是否为NULL的时候写错了,卡了半天)
 * 
 * 向前替换,减少移动次数,时间O(n)
 * 向后替换,时间O(n^2)-->不可取,暴力
 */
class Solution
{
public:
    void replaceSpace(char *str, int length)
    {
        if (str == NULL || length <= 0)
        {
            return;
        }
        int oLength = 0;
        int spaceCount = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            oLength++;
            if (str[i] == ' ')
            {
                spaceCount++;
            }
        }
        int newLength = oLength + 2 * spaceCount;
        if (newLength > length)
        {
            return;
        }
        int indexNew = newLength;
        int indexOld = oLength;
        while (indexOld >= 0 && indexNew > indexOld)
        {
            if (str[indexOld] == ' ')
            {
                str[indexNew--] = '0';
                str[indexNew--] = '2';
                str[indexNew--] = '%';
            }
            else
            {
                str[indexNew--] = str[indexOld];
            }
            indexOld--;
        }
    }
};

int main(int argc,char **argv,char **envp) {
    char *str=(char*)malloc(80*sizeof(char));
    scanf("%[^\n]",str);
    Solution().replaceSpace(str,80);
    printf("%s\n", str);
    free(str);
    return 0;
}