/*
Write a loop to display Digits of a given number in reverse

function Digits(int n)
*/

#include<iostream>
using namespace std;

int Digits(int n)
{
    int r = 0;
    while(n>0)
    {
        r = n%10;
        n = n/10;
        cout << r << " ";

    }
}

int main(int argc, char const *argv[])
{
    int num = atoi(argv[1]);
    Digits(num);    
    return 0;
}