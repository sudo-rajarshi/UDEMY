/*
add two 2D-arrays
*/

#include<iostream>
using namespace std;

const int rows = 2;
const int cols = 3;

void add(int a[rows][cols], int b[rows][cols], int c[rows][cols], int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
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
    int a[rows][cols] = {{1,2,3},{4,5,6}};
    int b[rows][cols] = {{1,2,3},{4,5,6}};
    int c[rows][cols];
    add(a,b,c,rows,cols);
    show_result(c, rows, cols);
    return 0;
}