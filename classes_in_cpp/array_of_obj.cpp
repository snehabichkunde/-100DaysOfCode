#include<iostream>
using namespace std;
class Employee {
    int id;
    int salary;

    public:
        void setData(){
            salary = 123;
            cout << "Enter the Id of Employee: ";
            cin >> id;
        }     
        void getData(){
            cout << "The salary of the employee with id " << id << " is " << salary << endl;
        }
};

int main()
{
    Employee Fb[100];
    // created the array of object
    for (int i=0; i<100; i++)
    {
        Fb[i].setData();
        Fb[i].getData();
    }
    return 0;
}