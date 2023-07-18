/*
Find and display Maximum element from Array
*/

#include<iostream>
using namespace std;

int findMax(int A[], int n)
{
    int max = A[0];
    for(int i=0; i<n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

int main(int argc, char const *argv[])
{
    int arr[]={4,6,27,15,31,22,30,29,8,16};
    int len_arr = sizeof(arr)/sizeof(int);
    cout << findMax(arr, len_arr);
    return 0;
}