#include<iostream>
using namespace std;
class SmartPtr{
    int *ptr;   // wrapps integer pointer
    public:
    SmartPtr(int *p = NULL): ptr(p) {}
    ~SmartPtr(){
        delete ptr;
    }
    // operator overloading
    int & operator *(){
        return *ptr;
    }
};

int main()
{
    SmartPtr sp(new int());
    *sp = 20;
    cout << *sp << endl;
}