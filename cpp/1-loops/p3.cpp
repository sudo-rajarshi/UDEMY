/*
Write a loop to print factors of a given number

function Factors(int n)
*/

#include<iostream>
using namespace std;

void Factors(int n)
{
    for (int i=1; i<=n; i++)
    {
        if (n%i == 0)
        {
            cout << i << " "; 
        }
    }
}

int main(int argc, char const *argv[])
{
    int num = atoi(argv[1]);
    Factors(num);
    return 0;
}