// to find the size of pointer 
#include<iostream>
using namespace std;
int main()
{
    int *a = new int(10);
    char *g = new char('g');
    double *d = new double(7.6);
    cout << "the size of pointer a is " << sizeof(a) << endl;      //8
    cout << "the size of pointer *a is " << sizeof(*a) << endl;   // 4
    cout << "the size of pointer g is " << sizeof(g) << endl;   // 8
    cout << "the size of pointer *g is " << sizeof(*g) << endl;   // 1
    cout << "the size of pointer d is " << sizeof(d) << endl;   // 8
    cout << "the size of pointer *d is " << sizeof(*d) << endl;   // 8
    return 0;
}