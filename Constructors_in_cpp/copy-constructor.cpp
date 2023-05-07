#include<iostream>
using namespace std;

class Number {
    int a;
    public:
        Number (){
            a=0;
        }
        Number (int x)
        {
            a = x;
        }
        // when no copy constructor is found the compilar provides it's own copy constructor 

        // Copy Constructor 
        Number ( Number & obj)
        {
            cout << "Copy constructor is called!!!" << endl;
            a = obj.a;
        }
        void display(){
            cout << "Your number is " << a << endl;
        }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // copy constructor invoked
    z1.display();

    z2 = z; //  copy constructor is not called as z2 is already decleared
    z2.display();

    Number z3 = z;   // copy constructor invoked
    z3.display();
    return 0;
}