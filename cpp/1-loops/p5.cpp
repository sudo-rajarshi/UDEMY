/*
Write a loop to count factors of a number

check if a number is a Prime number

PRIME NUMER -- a number having factors 1 and itself, it will have only 2 factors

function Prime(int n)
*/

#include<iostream>
using namespace std;

int Prime(int n)
{
    int cnt = 0;
    for (int i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            cnt ++;
        }
    }

    if (cnt == 2)
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
    int isPrime = Prime(num);

    if (isPrime)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not a Prime Number";
    }
    return 0;
}