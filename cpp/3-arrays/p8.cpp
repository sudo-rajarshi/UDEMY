/*
multiply two 2D-arrays
*/

#include<iostream>
using namespace std;

const int rows = 3;
const int cols = 3;

void mul(int a[rows][cols], int b[rows][cols], int c[rows][cols], int rows, int cols)
{
    int sum = 0;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            for(int k=0; k<rows; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
}

void show_result(int c[rows][cols], int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(int argc, char const *argv[])
{
    int a[rows][cols] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[rows][cols] = {{1,2,3},{4,5,6},{7,8,9}};
    int c[rows][cols];
    mul(a,b,c,rows,cols);
    show_result(c, rows, cols);
    return 0;
}