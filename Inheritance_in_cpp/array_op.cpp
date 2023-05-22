// pointer to objects and arrow operator 
#include<iostream>
using namespace std;

class Complex{
    int real;
    int imag;
    public:
        Complex(int a, int b): real(a), imag(b) {};
        void printData()
        {
            cout << real << "+" << imag << "i" << endl;
        }      
};

int main()
{
    Complex *ptr = new Complex(2,3);
    ptr -> printData();
    return 0;
}