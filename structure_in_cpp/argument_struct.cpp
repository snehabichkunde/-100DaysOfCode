// Argument passing by referance
#include<iostream>
using namespace std;
struct student {
    int roll_no;
    string name;
    string address;
};
void print (const student & s)
{
    cout << s.name << " " << s.roll_no << " " << s.address << endl;
}
int main ()
{
    student s = {34, "Sneha", "Yeoti"};
    print (s);
    return 0;
}