/*
Find if a given number is Positive or Negative

Parameter
n - a integer number
*/

#include<iostream>
using namespace std;

int find_positive(int num)
{
    if (num >= 0)
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
    int isPositive = find_positive(num);

    if (isPositive)
    {
        cout << "positive";
    }
    else
    {
        cout << "negative";
    }

    return 0;
}