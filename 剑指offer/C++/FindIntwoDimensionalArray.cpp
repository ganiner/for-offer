#include <iostream>
#include <vector>

using namespace std;

/*
 * 原书代码,先从最后一列扫,如果在这一例中,则往下扫,如果不是,删除这一列,前往上一列
 */
bool Find(int *matrix, int rows, int columns, int number)
{
    bool found = false;
    if (matrix != NULL && rows > 0 && columns > 0)
    {
        int row = 0;
        int column = columns - 1;
        while (row < rows && column >= 0)
        {
            if (matrix[row * columns + column] == number)
            {
                found = true;
                break;
            }
            else if (matrix[row * columns + column] > number)
            {
                --column;
            }
            else
            {
                ++row;
            }
        }
    }
    return found;
}

/*
 * 思路同上
 */
class Solution1
{
public:
    bool Find(int target, vector<vector<int>> array)
    {
        bool res = false;
        if (array.size() == 0 || array[0].size() == 0)
        {
            return false;
        }
        int xLength = array.size();
        int yLength = array[0].size();
        int row = 0;
        int colum = yLength - 1;
        while (row < xLength && colum >= 0)
        {
            if (array[row][colum] == target)
            {
                res = true;
                break;
            }
            else if (array[row][colum] > target)
            {
                colum--;
            }
            else
            {
                row++;
            }
        }
        return res;
    }
};

int main(int argc, char **argv, char **envp)
{
    int m, n, val;
    while (cin >> m >> n)
    {
        vector<vector<int>> array;
        for (int i = 0; i < m; i++)
        {
            vector<int> v;
            for (int j = 0; j < n; j++)
            {
                cin >> val;
                v.push_back(val);
            }
            array.push_back(v);
        }
        int target;
        cin >> target;
        cout << Solution1().Find(target, array) << endl;
    }
    return 0;
}