/*
Display all elements of Array using foreach loop, Display number with spaces
*/

#include<iostream>
using namespace std;

void display(int option)
{
    int arr[] = {1,2,3,4,5};

    if (option)
    {
        cout << "using for-each loop" << endl;
        for (auto x:arr)
        {
            cout << x << " ";
        }
    }
    else  
    {
        cout << "using for loop" << endl;
        int len_arr = sizeof(arr)/sizeof(int);
        for (int i=0; i<len_arr; i++)
        {
            cout << arr[i] << " ";
        }
    }
    
}

int main(int argc, char const *argv[])
{
    int option = atoi(argv[1]);
    display(option);
    return 0;
}