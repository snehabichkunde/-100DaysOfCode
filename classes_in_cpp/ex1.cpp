#include<iostream>
using namespace std;
class employee
{
    // no matter if you write private or not 
    // by default it will be private 
    int a, b, c;

    public:
    int d, e;
    void set_data(int a1, int b1, int c1);
    void print_data (); 
};

void employee:: set_data(int a1, int b1, int c1)
{
    a=a1; 
    b=b1;
    c=c1;
}

void employee:: print_data()
{
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;
    cout << "e=" << e << endl;
}

int main()
{
    employee sneha;
    // sneha.a = 12; -> will throw an error as a is pravite
    sneha.d = 10;
    sneha.e = 12;
    sneha.set_data(1,2,3);
    sneha.print_data();
    return 0;
}
