/*
Write conditional statement to find Maximum of 2 numbers

Parameters
x and y are 2 numbers

Expected output: print maximum number, just print a number
*/

#include<iostream>
using namespace std;

int find_max(int x, int y)
{
    if (x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
        
}

int main(int argc, char const *argv[])
{
    int num1 = atoi(argv[1]);;
    int num2 = atoi(argv[2]);;

    cout << find_max(num1, num2);
}