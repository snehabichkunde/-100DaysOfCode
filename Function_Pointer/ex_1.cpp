#include<iostream>
using namespace std;
void Fun ()
{
    cout << "Hey There!!!";
}
int main()
{
    void (*fun_ptr)() = Fun;
    //auto fun_ptr = Fun;  => will also work fine
    fun_ptr();
    // (*fun_ptr)();  => will work just fine
    return 0;
}