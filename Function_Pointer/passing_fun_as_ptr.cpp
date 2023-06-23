#include<iostream>
using namespace std;
int Add (int a, int b)
{
    return (a+b);
}
int Multiply (int a, int b)
{
    return (a*b);
}
int Compute(int a, int b, int(*fun_ptr)(int,int))
{
    return fun_ptr(a,b);
}
int main()
{
    cout << Compute(10,20,Add) << endl;
    cout << Compute (10,20,Multiply) << endl;
    return 0;
}