#include<iostream>
using namespace std;
int main()
{
    int *ptr1; 
    char *ptr2;
    double *ptr3;
    cout << sizeof(ptr1) << " " << sizeof(ptr2) << " " << sizeof(ptr3) << "\n";
    // size of all kind of pointers are same 
    return 0;
}