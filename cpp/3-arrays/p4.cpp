/*
Write a loop to find the minimum element from Array
*/

#include<iostream>
using namespace std;

int findMin(int A[], int n)
{
    int min = A[0];
    for(int i=0; i<n; i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}

int main(int argc, char const *argv[])
{
    int arr[]={14,6,27,15,31,22,30,29,8,16};
    int len_arr = sizeof(arr)/sizeof(int);
    cout << findMin(arr, len_arr);
    return 0;
}