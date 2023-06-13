#include<iostream>
using namespace std;
class Complex{
    private:
    int real, imag;
    public:
    Complex(int r=0, int i=0): real(r), imag(i) {}
    // operator overloading
    friend Complex operator+(Complex const &, Complex const &);
    void print (){
        cout << real << "+i" << imag << endl;
    }
};
Complex operator+(Complex const &c1, Complex const &c2)
    {
        Complex ru;
        ru.real = c1.real+c2.real;
        ru.imag = c1.imag+c2.imag;
        return (ru);
    }
int main()
{
    Complex c1(3,4), c2(4,5);
    Complex c3 = c1+c2;
    c3.print();
    return 0;
}