#include<iostream>
using namespace std;
int Sum (int a, int b)
{
    return (a+b);
}
int main()
{
    int (*sum_ptr)(int, int) = Sum;
    // auto sum_ptr = Sum;
    cout << sum_ptr(10,20) << endl;
    return 0;
}