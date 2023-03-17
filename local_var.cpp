#include<iostream>
using namespace std;
void func()
{
    // local verible
    // It can not accessed outside the func()
    int age = 18;
    cout << age;
}
int main()
{
    cout << "Age is ";
    func();
    cout << "\n";
    return 0;
}