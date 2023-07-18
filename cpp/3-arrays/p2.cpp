/*
Find the Sum of all the elements in an Array

function Sum(A,n)

A -- Array of elements
n -- number of elements


*/

#include<iostream>
using namespace std;

int Sum(int A[], int n)
{
    int sum = 0;

    for (int i=0; i<n; i++)
    {
        sum += A[i];
    }
    
    return sum;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5};
    int len_arr = sizeof(arr)/sizeof(int);
    cout << Sum(arr, len_arr);
    return 0;
}