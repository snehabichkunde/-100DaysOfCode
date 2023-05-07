// Parameterized constructor 
#include<iostream>
using namespace std;
class Complex {
    int a, b;
public:
    Complex(int x, int y)   // parameterized constructor as is takes any arguments
    {
        a = x;
        b = y;
    }
    void printNumber(){
        cout << "Your number: " << a << "+" << b << "i" << endl;
    }

};

int main ()
{
    // Implicite call 
    Complex p(3,4);

    // Explicite call
    Complex q = Complex (5,6);

    p.printNumber();
    q.printNumber();
    return 0;
}