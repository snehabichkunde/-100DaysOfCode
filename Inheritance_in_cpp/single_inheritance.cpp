#include<iostream>
using namespace std;

// base class 
class Base {
    int data1;
    public:
        int data2;
        Base () {
            data1 = 10;
            data2 = 20;
        }
        int getData1 ();
        int getData2 ();
};

int Base :: getData1 ()
{
    return data1;
}

int Base :: getData2 ()
{
    return data2;
}

class Derived : public Base {
    int data3;
    public:
        Derived (){
            data3 = data2 * getData1();
        }
        void display ();
};

void Derived :: display()
{
    cout << "Data1 = " << getData1() << endl;
    cout << "Data2 = " << data2 << endl;
    cout << "Data3 = " << data3 << endl;
}

int main()
{
    Derived x;
    x.getData1();
    x.getData2();
    x.display();
    return 0;
}