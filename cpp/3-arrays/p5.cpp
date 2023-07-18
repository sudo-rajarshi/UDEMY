/*
Write a loop to count number of positive and negative numbers separately in a Array
*/

#include<iostream>
using namespace std;

void count(int A[], int n)
{
    int p_cnt = 0;
    int n_cnt = 0;

    for(int i=0; i<n; i++)
    {
        if (A[i] > 0)
        {
            p_cnt++;
        }
        else
        {
            n_cnt++;
        }
    }

    cout << p_cnt << endl;
    cout << n_cnt << endl;

}

int main(int argc, char const *argv[])
{
    int arr[]={3,5,-2,9,-4,10,-24,19,81,-7,12,13};
    int len_arr = sizeof(arr)/sizeof(int);
    count(arr, len_arr);
    
    return 0;
}