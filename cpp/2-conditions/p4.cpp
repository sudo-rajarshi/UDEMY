/*
Write nested if conditions to find maximum of three numbers

parameters of Max3(int a, int b, int c)
a,b and c are 3 numbers

output
print greatest number
*/

#include<iostream>
using namespace std;

int Max3(int a, int b, int c)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        if (b>c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int main(int argc, char const *argv[])
{
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    int num3 = atoi(argv[3]);

    cout << Max3(num1, num2, num3);
    
    return 0;
}