/*
题目描述
牛牛总是睡过头，所以他定了很多闹钟，只有在闹钟响的时候他才会醒过来并且决定起不起床。从他起床算起他需要X分钟到达教室，上课时间为当天的A时B分，请问他最晚可以什么时间起床
输入描述:
每个输入包含一个测试用例。
每个测试用例的第一行包含一个正整数，表示闹钟的数量N(N<=100)。
接下来的N行每行包含两个整数，表示这个闹钟响起的时间为Hi(0<=A<24)时Mi(0<=B<60)分。
接下来的一行包含一个整数，表示从起床算起他需要X(0<=X<=100)分钟到达教室。
接下来的一行包含两个整数，表示上课时间为A(0<=A<24)时B(0<=B<60)分。
数据保证至少有一个闹钟可以让牛牛及时到达教室。
输出描述:
输出两个整数表示牛牛最晚起床时间。
示例1
输入
3 
5 0 
6 0 
7 0 
59 
6 59
输出
6 0
 */

#include <iostream>
#include <algorithm>

using namespace std;

struct Time
{
    int h;
    int m;
    Time() : h(0), m(0)
    {
    }
};

bool cmp(Time a, Time b)
{
    return a.h * 60 + a.m < b.h * 60 + b.m;
}
bool cmp_count(int a, int b)
{
    return a < b;
}

int main(int argc, char **argv, char **envp)
{
    int N, min;
    while (cin >> N)
    {
        Time *times = new Time[N + 1];
        int *count_time = new int[N + 1];
        for (int i = 0; i < N; i++)
        {
            cin >> times[i].h >> times[i].m;
            count_time[i] = times[i].h * 60 + times[i].m;
        }
        sort(times, times + N, cmp);
        sort(count_time, count_time + N, cmp_count);
        //        for (int j = 0; j < N ; j++) {
        //            cout << times[j].h<<":"<<times[j].m<<endl;
        //        }
        cin >> min;
        Time startTime = Time();
        cin >> startTime.h >> startTime.m;
        int time = startTime.h * 60 + startTime.m - min;
        Time res;
        for (int i = 0; i < N; i++)
        {
            if (time >= count_time[i])
            {
                res = times[i];
            }
            else
            {
                break;
            }
        }
        cout << res.h << " " << res.m << endl;
        delete[] times;
        delete[] count_time;
    }
    return 0;
}