// Multipal Inheritance 
#include<iostream>
using namespace std;

class Person {
    protected:
        string name;
    public:
         void set_name(const string & Name){
             name = Name;
         }
         void display_name(){
             cout << "Name: " << name << endl;
         }
};

class Employee: public virtual Person {
    protected:
        int employeeId;
    public:
        void set_emp_id(int inId){
            employeeId = inId;
        }
        void get_emp_id() {
            cout << "Employee Id is: " << employeeId << endl;
        }
};

class Student: public virtual Person {
    protected:
        int studentId;
    public:
        void set_std_id (int inpId){
            studentId = inpId;
        }
        void get_std_id(){
            cout << "Student Id is: " << studentId << endl;
        }
};

class workingStudent : public Student, public Employee {
    public:
    void display_working_std_info()
    {
        display_name();
        get_std_id();
        get_emp_id();
    }
};

int main()
{
    workingStudent ws;
    ws.set_name("Sneha Bichkunde");
    ws.set_std_id(67);
    ws.set_emp_id(1010);
    ws.display_working_std_info();
    return 0;
}