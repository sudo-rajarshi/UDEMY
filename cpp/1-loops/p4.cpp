/*
Write a loop to check if a number is perfect number

PERFECT NUMBER - sum of the factors of number is double the number

function Perfect(int n)
*/

#include<iostream>
using namespace std;

int Perfect(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        if (n%i == 0)
        {
            sum+=i;
        }
    }

    if (sum == 2*n)
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
    int isPerfect = Perfect(num);

    if (isPerfect)
    {
        cout<<"Perfect Number";
    }
    else
    {
        cout<<"Not a Perfect Number";
    }

    return 0;
}