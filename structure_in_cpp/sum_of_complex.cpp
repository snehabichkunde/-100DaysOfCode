// sum of complrx numbers
#include<iostream>
using namespace std;
struct complex{
    int real;
    int imag;
};
void sum(const complex &n1, const complex &n2)
{
    complex n3;
    n3.real = n1.real + n2.real;
    n3.imag = n1.imag + n2.imag;
    cout << n3.real << "+i" << n3.imag << endl;
}
int main()
{
    complex n1, n2;
    cin >> n1.real >> n1.imag >> n2.real >> n2.imag;
    sum(n1, n2);
    return 0;
}