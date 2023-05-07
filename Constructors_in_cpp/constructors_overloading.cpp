// Constructors overloading 
#include<iostream>
using namespace std;
class Complex {
    int a, b;
public:
    Complex(int x, int y)   
    {
        a = x;
        b = y;
    }
    Complex(int x)   
    {
        a = x;
        b = 0;
    }
    Complex()   
    {
        a = 0;
        b = 0;
    }
    void printNumber(){
        cout << "Your number: " << a << "+" << b << "i" << endl;
    }

};

int main ()
{
    Complex p(3,4), q(3), s;

    p.printNumber();
    q.printNumber();
    s.printNumber();
    return 0;
}