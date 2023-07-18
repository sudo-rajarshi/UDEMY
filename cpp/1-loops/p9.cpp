/*
Write a loop to reverse a number and then check if its a Palindrome

PALINDROME -- reverse of a number is equal to a number

function Palindrome(int n)
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

int Palindrome(int m, int n)
{
    if (m==n)
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
    int reversed = Reverse(num);
    int isPalindrome = Palindrome(num, reversed);

    if (isPalindrome)
    {
        cout << "Palindrome Number";
    }
    else
    {
        cout << "Not a Palindrome Number";
    }

    return 0;
}