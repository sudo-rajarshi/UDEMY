/*
Write a loop to find factorial of number

function Factorial(int n)
*/

#include<iostream>
using namespace std;

int Factorial(int n)
{
    int factorial = 1;
    for (int i=1; i<=n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

int main(int argc, char const *argv[])
{
    int num = atoi(argv[1]);
    cout << Factorial(num);
    return 0;
}