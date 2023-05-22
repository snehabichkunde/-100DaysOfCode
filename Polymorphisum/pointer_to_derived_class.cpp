#include<iostream>
using namespace std;

class Base{
    public:
    int var_base;
    void display(){
        cout << "Displaying Base class varible var_base: " << var_base << endl;
    }
};
class Derived: public Base{
    public:
    int var_derived;
    void display(){
        cout << "Displaying Base class varible var_base: " << var_base << endl;
        cout << "Displaying derived class varible var_derived: " << var_derived << endl;
    }
};
int main()
{
    Base *base_class_pointer;
    Base obj_base;
    Derived obj_derived;
    Derived *derived_class_pointer;
    base_class_pointer = & obj_base;
    base_class_pointer -> var_base = 34;
    base_class_pointer -> display();
    base_class_pointer = & obj_derived;
    derived_class_pointer -> var_base = 144;
    derived_class_pointer -> var_derived = 123;
    derived_class_pointer -> display();
    return 0;
}