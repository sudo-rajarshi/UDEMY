/*
Write a loop for Reversing the Digits of a Number

function Reverse(int n)
*/

#include<iostream>
using namespace std;

int Reverse(int n)
{
    int r = 0;
    int reversed = 0;

    while(n>0)
    {
        r = n%10;
        n = n/10;
        reversed = reversed*10 + r;
    }

    return reversed;
}

int main(int argc, char const *argv[])
{
    int num = atoi(argv[1]);
    cout << Reverse(num);
    return 0;
}