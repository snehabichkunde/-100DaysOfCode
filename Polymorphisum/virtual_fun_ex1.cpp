#include<iostream>
using namespace std;

class Base{
    public:
    int var_base = 1;
    virtual void display(){
        cout << "Displaying Base class varible var_base: " << var_base << endl;
    }
};
class Derived: public Base{
    public:
    int var_derived = 2;
    void display(){
        cout << "Displaying derived class varible var_derived: " << var_derived << endl;
    }
};

int main()
{
    Base *base_class_pointer;
    Derived obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer -> display();
    return 0;
}
