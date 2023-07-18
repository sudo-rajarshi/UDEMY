/*
Write a program to derive GDC of two numbers

GDC -- greatest common divisor 

function GDC(int m, int n)
*/

#include<iostream>
using namespace std;

int GDC(int m, int n)
{
    while (m!=n)
    {
        if (m>n)
        {
            m = m-n;
        }
        else
        {
            n = n-m;
        }
    }

    return m;

}

int main(int argc, char const *argv[])
{
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    cout << GDC(num1, num2);
    return 0;
}