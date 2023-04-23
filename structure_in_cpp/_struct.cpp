#include<iostream>
using namespace std;
struct student{
    int roll_no;
    string name;
    string address;
};
int main()
{
    student s = {37, "Sneha", "xyz"};
    cout << s.roll_no << " " << s.name << " " << s.address;
    cout << endl;
    return 0;
}