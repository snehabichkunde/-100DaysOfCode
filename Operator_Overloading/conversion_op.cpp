#include<iostream>
using namespace std;
class Fraction{
    private:
    int num, den;
    public:
    Fraction(int n=0, int d=1): num(n), den(d) {}
    operator float() const{
        return (float(num)/float(den));
    }
};
int main()
{
    Fraction f(3,4);
    float val = f;
    cout << val << endl;
    return 0;
}