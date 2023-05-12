#include<iostream>
using namespace std;

class Base1 {
    public:
        void greet (){
            cout << "Kaise ho?" << endl;
        }
};

class Base2 {
    public:
        void greet (){
            cout << "Kashi aahes?" << endl;
        }
};

class Derived : public Base1 , public Base2 {
    public:
        void greet(){
            Base2 :: greet();  // here when we call greet() via Derived obj, base2 greet() will invoke
        }
};

int main()
{
    Derived d;
    d.greet();
    return 0;
}