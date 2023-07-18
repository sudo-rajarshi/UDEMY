/*
Write a loop to find sum of cubes of digits of a number and check if its Armstrong number

function Armstrong(int n)

ARMSTRONG NUMBER - if the sum of cubes of digits of a number is equal to a number
*/

#include<iostream>
using namespace std;

int Armstrong(int n)
{
    int r = 0;
    int sum = 0;
    int m = n;

    while(n>0)
    {
        r = n%10;
        n = n/10;
        sum += r*r*r;
    }

    if (sum==m)
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
    int isArmstrong = Armstrong(num);

    if (isArmstrong)
    {
        cout << "Armstrong number";
    }
    else
    {
        cout << "Not an Armstrong number";
    }

    return 0;
}