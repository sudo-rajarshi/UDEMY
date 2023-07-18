/* Dynamic memory allocation */

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int size = 10;
    int *p = new int[size]; // dynamically memory allocated inside heap memory

    for (int i=0; i<size; i++)
    {
        p[i] = i; // storing data inside the heap memory as a form of an array
    }

    for (int i=0; i<size; i++)
    {
        cout << p[i] << ","; // display the values stored inside the array
    }
    cout << endl;

    delete []p; // deleting the allocated memory
    cout << "Address of p: " << p << endl;

    p=nullptr; // dereferencing the pointer

    cout << "Address of p: " << p << endl;

    


    return 0;
}