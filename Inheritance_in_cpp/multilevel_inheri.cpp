// A --> B --> C
// A is the base class for B and B is base class of C
#include<iostream>
using namespace std;

class Student {
    protected: 
        string name;
    public:
        void set_name (const string& Name){
            name = Name;
        }
        void get_name (){
            cout << "Name: " << name << endl;
        }
};

class Exam : public Student{
    protected:
        float marks;
    public: 
        void set_marks (int x){
            marks = x;
            if (marks>100 || marks <0){
                cout << "Invalid Output" << endl;
                exit(0) ;
            }
        }
        void get_marks(){
            cout << "Marks: " << marks << endl;
        }
};

class Result : public Exam {
    public:
        void display_result(){
            cout << "Restul: ";
            if(marks >=50){
                cout << "Pass" << endl;
            }
            else {
                cout << "Fail" << endl;
            }
        }
};

int main ()
{
    Result result;
    result.set_name("Sneha Bichkunde");
    result.set_marks(101);
    result.display_result();
    return 0;
}