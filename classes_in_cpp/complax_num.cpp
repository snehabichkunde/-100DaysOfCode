// passing objects to the function
#include<iostream>
using namespace std;
class Complex{
    int a;
    int b;

    public:
        void setData(int a1, int b1){
            a = a1;
            b = b1;
        }
        void printNumber(){
            cout << "Your number: " << a << "+" << b << "i" << endl;
        }
        void sum(Complex o1, Complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
            cout << "The sum is: " << a << "+" << b << "i" << endl; 
        }
};

int main()
{
    Complex c1, c2, c3, c1c2, c2c3, c1c3;
    c1.setData(1,2);
    c1.printNumber();
    c2.setData(3,4);
    c2.printNumber();
    c3.setData(5,6);
    c3.printNumber();

    c1c2.sum(c1,c2);
    c2c3.sum(c2,c3);
    c1c3.sum(c1,c3);
    return 0;
}