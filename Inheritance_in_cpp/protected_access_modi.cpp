// protected access modifier
#include <iostream>
using namespace std;

class B {
    protected:
        int a;
    private:
        int b;
};

class D: public B {
    
};

int main ()
{
    D x;
    B y;
    // cout << x.a; -->  will show error as a is protected
    // cout << y.a; --> a is protected to both base and derived class
}
