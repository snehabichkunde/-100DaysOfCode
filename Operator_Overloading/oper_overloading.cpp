#include<iostream>
using namespace std;
class Complex{
    private:
    int real, imag;
    public:
    Complex(int r=0, int i=0): real(r), imag(i) {}
    // operator overloading
    Complex operator+(Complex const &c)
    {
        Complex ru;
        ru.real = real + c.real;
        ru.imag = imag + c.imag;
        return ru;
    }
    void print (){
        cout << real << "+i" << imag << endl;
    }
};
int main()
{
    Complex c1(3,4), c2(4,5), c3;
    c3 = c1+c2;
    c3.print();
    return 0;
}
