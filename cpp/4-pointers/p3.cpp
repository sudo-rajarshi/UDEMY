/* pointer arithmetic */

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int A[5] = {1,2,3,4,5};
    int *p = A;


    cout << *p << endl;
    p++;
    cout << *p << endl;
    p=p+2;
    cout << *p << endl;
    p=p-3;

    cout << "printing values of array using pointer" << endl;
    for (int i=0; i<5; i++)
    {
        cout << *(p+i) << endl;
    }

    cout << "printing addresses of array using pointer" << endl;
    for (int i=0; i<5; i++)
    {
        cout << (p+i) << endl;
    }
    return 0;
}