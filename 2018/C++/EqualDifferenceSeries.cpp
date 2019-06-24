#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string Solve(vector<int> v, int len)
{
    if (len == 1)
    {
        return "Possible";
    }
    string result = "Possible";
    sort(v.begin(), v.end());
    int d = v[1] - v[0];
    for (int i = len - 1; i >= 1; i--)
    {
        if (v[i] - v[i - 1] != d)
        {
            return "Impossible";
        }
    }
    return result;
}

int main(int argc, const char *argv[])
{
    int n;
    while (cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << Solve(v, n) << endl;
    }
    return 0;
}