#include<iostream>
using namespace std;

class Base1 {
    int a;
    public:
    Base1(int i){
        a = i;
        cout << "The Base1 class constructor is invoke" << endl;
    }
    void get_data1(){
        cout << a << endl;
    }
};

class Base2 {
    int b;
    public:
    Base2(int j){
        b = j;
        cout << "The Base2 class constructor is invoke" << endl;
    }
    void get_data2(){
        cout << b << endl;
    }
};

class Derived: public Base2, public Base1 {
    int c;
    public:
    Derived(int x, int y, int z): Base1(x), Base2(y) {
        c = z;
        cout << "The derived class constructor is invoke" << endl;
    }
    void get_data(){
        cout << c << endl;
    }
};

int main ()
{
    Derived d(2,3,4);
    d.get_data1();  // 2
    d.get_data2();   // 3
    d.get_data();    // 4
    return 0;
}

// The Base2 class constructor is invoke
// The Base1 class constructor is invoke
// The derived class constructor is invoke