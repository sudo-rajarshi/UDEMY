/*
Write a loop to find sum of first n natural number

function SumOfN(int n)
*/

#include<iostream>
using namespace std;

int SumOfN(int n)
{
    int sum=0;

    for(int i=1; i<=n; i++)
    {
        sum += i;
    }

    return sum;
}

int main(int argc, char const *argv[])
{
    int num = atoi(argv[1]);
    cout << SumOfN(num);
    return 0;
}