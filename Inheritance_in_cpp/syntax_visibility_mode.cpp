// syntax of inheritance and visibility maode
#include <iostream>
using namespace std;

class Employee
{
public:
    int Id;
    int salary;
    Employee() {}
    Employee(int inId)
    {
        inId = Id;
        salary = 50000;
    }
};

// Derived class syntax
/*
class {{derived-class-name}} : {{visibility maode}} {{base-class-name}}
{
    class method / members / function ... etc
}
*/

/*
note : 1) by defalul visibility mode will be private
2) private members or fun will always be private it can not inherited
3) visibility mode : private : public members or functions of base class will be private
4) visibility mode : public : public members or functions of base class will be public

*/
// Creating a class derived from Employee

class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        Id = inpId;
        languageCode = 9;
    }
    void show()
    {
        cout << Id << endl;
    }
};

int main()
{
    Employee Sneha(1010), Suraj(1011);
    Programmer skillF(1012);
    cout << skillF.Id << endl;
    cout << skillF.languageCode << endl;
    return 0;
}
