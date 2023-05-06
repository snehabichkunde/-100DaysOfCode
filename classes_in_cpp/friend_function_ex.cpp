// simple example of friend function 
#include<iostream>
using namespace std;

// forwaed declearation 
class Y;

class X{
    int a;

    public:
        friend int sum(X,Y);
        void setData(int a1){
            a = a1;
        }
};

class Y{
    int b;

    public:
        friend int sum(X,Y);
        void setValue(int b1){
            b = b1;
        }
};

int sum(X x, Y y){
    return (x.a+y.b);
}

int main ()
{
    X p;
    Y q;
    p.setData(3);
    q.setValue(5);
    int res = sum(p,q);
    cout << "The sum of data in X and Y is: " << res << endl;
    return 0;
}