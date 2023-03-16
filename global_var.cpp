#include<iostream>
using namespace std;
// global varible
int global = 10;
// it can be accessed within the function

void display()
{
    cout << global << endl;
}

int main()
{
    display(); // 10

    // changing globle variable in main function

    global = 20;
    display();  // 20
    return 0;
}