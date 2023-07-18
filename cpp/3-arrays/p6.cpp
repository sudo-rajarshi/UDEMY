/*
search an element in a given array
*/

#include<iostream>
using namespace std;

int search(int A[], int n, int key, int option)
{
    if (option)
    {
        cout << "Using Linear Search" << endl;

        for(int i=0; i<n; i++)
        {
            if (A[i] == key)
            {
                cout << key << " found at index " << i << endl;
            }
            else
            {
                cout << "Key not found" << endl;
            }
        }
    }
    else
    {
        cout << "Using Binary Search" << endl;

        int low = 0;
        int high = n-1;
        int mid = 0;

        while(A[mid] != key)
        {
            mid = (low+high)/2;
            if (A[mid] < key)
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }

            if (low > high)
            {
                cout << "Key not found";
                break;
            }
        }
        cout << key << " found at index " << mid << endl;
    }
}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int len_arr = sizeof(arr)/sizeof(int);
    
    int key = atoi(argv[1]);
    int option = atoi(argv[2]);

    search(arr, len_arr, key, option);
    return 0;
}