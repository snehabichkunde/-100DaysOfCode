// Friend function
#include<iostream>
using namespace std;
class Complex{
    int a;
    int b;

    public:
        // below lines means the Complex function is allowed to handle private data
        friend Complex complexSum(Complex o1, Complex o2);
        void setData(int a1, int b1){
            a = a1;
            b = b1;
        }
        void printNumber(){
            cout << "Your number: " << a << "+" << b << "i" << endl;
        }
        
};

Complex complexSum(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData((o1.a+o2.a), (o1.b+o2.b));

    return o3; 
}

int main()
{
    Complex c1, c2, c3, c1c2, c2c3, c1c3;
    c1.setData(1,2);
    c1.printNumber();
    c2.setData(3,4);
    c2.printNumber();
    c3.setData(5,6);
    c3.printNumber();
    c1c2 = complexSum(c1,c2);
    c2c3 = complexSum(c2,c3);
    c1c2.printNumber();
    c2c3.printNumber();
    return 0;
}

/*
the properties of friend function:
1. not in the scope of friend class
2. since it is not in the scope of the class, it can not be called from object of the class
    c1.complexSum() == Invalid
3. Usually contans the object as argument 
5. It can be decleared in side publuc or pravite section of the class
6. It can not directly access the members of class 

*/
