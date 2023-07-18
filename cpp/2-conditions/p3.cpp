/*
Write conditional statement for checking is a number is positive or negative

function OddEven is taking parameter

parameter
n - a integer number
*/

#include<iostream>
using namespace std;

int OddEven(int num)
{
    if (num%2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;   
    }
}

int main(int argc, char const *argv[])
{
    int num = atoi(argv[1]);
    int isEven = OddEven(num);

    if (isEven)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }
    return 0;
}