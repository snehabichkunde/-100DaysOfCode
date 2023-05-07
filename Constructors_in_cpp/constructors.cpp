// Constructors in cpp
#include<iostream>
using namespace std;

class Complex {
    int a,b;
public:
    // creating constructor
    // constructor is the special function with same name as the class
    // It is used to initialize the objects of it's own class
    // It is automatically invoke whenever an objct is created
    // constructor decleraction 
    Complex();    // default constructor as is does not take any arguments

    void printNumber(){
        cout << "Your number: " << a << "+ " << b << "i" << endl;
    }

};

Complex :: Complex ()
{
    a = 10; 
    b = 20;
}

int main ()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}

/*   chara,, of constructors 
1. It should be declear in public section of the class
2. They can not return value or do not have any return type
3. It can have default argument 
4. we can not refer to their daaress


*/
