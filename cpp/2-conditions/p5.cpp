/*
Write switch case for performing Arithmetic operations

function ArithOpt(int x, int y, int choice)

x and y are 2 values

choice
1 -- Add 2 number
2 -- Subtract 2 number
3 -- Multiply 2 number
4 -- Divide 2 numbers
*/

#include<iostream>
using namespace std;

float ArithOpt(float x, float y, int choice)
{
    switch (choice)
    {
    case 1:
        return x+y;
        break;

    case 2:
        return x-y;
        break;
    
    case 3:
        return x*y;
        break;

    case 4:
        return x/y;

    default:
        break;
    }
}

int main(int argc, char const *argv[])
{
    float num1 = atof(argv[1]);
    float num2 = atof(argv[2]);
    int choice = atoi(argv[3]);
    
    cout<< ArithOpt(num1, num2, choice);
    return 0;
}