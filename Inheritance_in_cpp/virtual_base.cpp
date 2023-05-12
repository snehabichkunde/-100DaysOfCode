#include<iostream>
using namespace std;

class Student {
    protected:
       int roll_no ;
    public:
        void set_roll_no(int x){
            roll_no = x;
        }
        void display_roll_no(){
            cout << "Roll number: " << roll_no << endl;
        }
};

class Internals : public virtual Student {
    protected:
        int marks1;
    public:
        void set_marks1(int a) {
            marks1 = a;
        }
        void display_marks1(){
            cout << "Internls marks: " << marks1 << endl;
        }
};

class Finals : public virtual Student {
    protected:
       int marks2;
    public:
        void set_marks2(int b){
            marks2 = b;
        } 
        void display_marks2(){
            cout << "final marks: " << marks2 << endl;
        }
};

class Result : public Internals, public Finals{
    public:
        void display_result() {
            display_roll_no();
            display_marks1();
            display_marks2();
            cout << "Result : ";
            if(marks1 + marks2 >=50){
                cout << "Pass" << endl;
            }
            else{
                cout << "Fail" << endl;
            }
        }
};

int main ()
{
    Result result;
    result.set_roll_no(67);
    result.set_marks1(24);
    result.set_marks2(34);
    result.display_result();
    return 0;
}