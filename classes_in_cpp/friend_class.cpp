// frinend function
#include<iostream>
using namespace std;

// forwoed delceration 
class Complex;

class Calulator {
    public: 
        int sumRealCom (Complex, Complex);
        int sumImagCom (Complex, Complex);
};

class Complex {
    int a, b;
    public:

        // Indivually declearing functions as function
        friend int Calulator:: sumRealCom(Complex, Complex);
        friend int Calulator:: sumImagCom(Complex, Complex);
        void setData(int a1, int b1){
            a = a1;
            b = b1;
        }    
        void yourNum (){
            cout << "Your number is: " << a << "+ " << b << "i" << endl;
        }
};

int Calulator:: sumRealCom(Complex o1,Complex o2)
{
    return (o1.a+o2.a);
}

int Calulator:: sumImagCom(Complex o1,Complex o2)
{
    return (o1.b+o2.b);
}

int main()
{
    Complex o1, o2;
    Calulator cal;
    o1.setData(1,3);
    o1.yourNum();
    o2.setData(5,8);
    o2.yourNum();
    int res = cal.sumRealCom(o1,o2);
    int resc = cal.sumImagCom(o1,o2);

    cout << "The sum of o1 and o2 is: " << res << "+" << resc << "i" << endl;

    return 0;
}