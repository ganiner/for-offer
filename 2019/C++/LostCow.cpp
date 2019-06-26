/*
牛牛去犇犇老师家补课，出门的时候面向北方，但是现在他迷路了。虽然他手里有一张地图，但是他需要知道自己面向哪个方向，请你帮帮他。
输入描述:
每个输入包含一个测试用例。
每个测试用例的第一行包含一个正整数，表示转方向的次数N(N<=1000)。
接下来的一行包含一个长度为N的字符串，由L和R组成，L表示向左转，R表示向右转。
输出描述:
输出牛牛最后面向的方向，N表示北，S表示南，E表示东，W表示西。
示例1
输入
3
LRR
输出
E
 */

//+1左转,-1右转,上北下南左西右东
#include <iostream>
#include <string>

using namespace std;

const char directions[4] = {'N', 'W', 'S', 'E'};

int main(int argc, char **argv, char **envp)
{
    int n;
    string a;
    while (cin >> n)
    {
        cin >> a;
        int length = (int)a.size();
        int origin = 0;
        for (int i = 0; i < length; i++)
        {
            if (a[i] == 'L')
            {
                origin += 1;
            }
            else
            {
                origin -= 1;
            }
            origin = origin % 4;
        }
        if (origin < 0)
        {
            origin += 4;
        }
        cout << directions[origin] << endl;
    }
    return 0;
}