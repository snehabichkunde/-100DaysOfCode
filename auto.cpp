// Auto Keyword
#include<iostream>
#include<typeinfo>
using namespace std;
int main ()
{
    // auto a; will through an error
    auto x = 3;
    auto y = 4.56;
    auto ptr = &x;

    cout << typeid(x).name() << endl; // i (int)
    cout << typeid(y).name() << endl; // d (double)
    cout << typeid(ptr).name() << endl; // pi (pointer)

    // typeid oprator is used when dynamic type of object is need to know
    // typeid(x).name() will give the data type of x
    return 0;
}