#include <iostream>

using namespace std;

/*
 * 原书代码,先从最后一列扫,如果在这一例中,则往下扫,如果不是,删除这一列,前往上一列
 */
bool Find(int *matrix,int rows,int columns,int number){
    bool found = false;
    if(matrix != NULL && rows > 0 && columns > 0){
        int row = 0;
        int column = columns - 1;
        while (row < rows && column >=0 )
        {
            if(matrix[row * columns + column]==number){
                found = true;
                break;
            }
            else if (matrix[row * columns + column] > number)
            {
                -- column;
            }
            else {
                ++ row;
            }
        }
        return found;
    }
}

int main(int argc,char **argv,char **envp){
    return 0;
}