#include<iostream>
using namespace std;
void fun1() throw(int)
{
    cout << "fun1 begins\n";
    throw 100;
    cout << "fun1 ends\n";
}
void fun2() throw(int)
{
    cout << "fun2 begins\n";
    fun1();
    cout << "fun2 ends\n";
}
int main()
{
    try{
        fun2();
    }
    catch(int i)
    {
        cout << "caught exception\n";
    }
    cout << "Bye..\n";
    return 0;
}
/* o/p :
fun2 begins
fun1 begins
caught exception
Bye..  */