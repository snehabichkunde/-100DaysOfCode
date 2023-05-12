#include<iostream>
using namespace std;

class Base1 {
    public:
        void greet (){
            cout << "Hello!!!" << endl;
        }
};

class Base2 {
    public:
        void greet() {
            cout << "You ok?" << endl;
        }
};

class Derived : public Base1, public Base2 {
    public:
        void greet () {
            cout << "Hi!!!" << endl;
        }  
};

int main()
{
    Base1 b1;
    Base2 b2;
    Derived d;

    b1.greet();     // Hello!!!
    b2.greet();     // You ok?
    d.greet();      // Hi!!!
    return 0;
}