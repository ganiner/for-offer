/*
题目描述
牛牛以前在老师那里得到了一个正整数数对(x, y), 牛牛忘记他们具体是多少了。

但是牛牛记得老师告诉过他x和y均不大于n, 并且x除以y的余数大于等于k。
牛牛希望你能帮他计算一共有多少个可能的数对。

输入描述:
输入包括两个正整数n,k(1 <= n <= 10^5, 0 <= k <= n - 1)。
输出描述:
对于每个测试用例, 输出一个正整数表示可能的数对数量。
示例1
输入
5 2
输出
7
 */

// 网上找的,没看懂,找规律
// 余数大于等于0,范围内所有数对都符合
#include <iostream>
#include <cstdio>

using namespace std;

long long n, k;

int main(int argc, char **argv, char **envp)
{
    long long ans = 0;
    scanf("%lld%lld", &n, &k);
    if (k == 0LL)
    {
        printf("%lld\n", n * n);
        return 0;
    }
    for (long long y = k + 1; y <= n; ++y)
    {
        ans += n / y * (y - k);
        if (n % y >= k)
            ans += (n % y - k + 1);
    }
    printf("%lld\n", ans);
    return 0;
}
