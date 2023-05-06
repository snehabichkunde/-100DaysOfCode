// Swapig the valuesof calss objects 

#include<iostream>
using namespace std;

class C2;

class C1{
    int val1;

    public:
        friend void exchange (C1 &, C2 &);
        void setData (int a){
            val1 = a;
        }
        void printData(){
            cout << "val1 = " << val1 << endl;
        }
};

class C2 {
    int val2;

    public:
        friend void exchange (C1 &, C2 &);
        void setData(int b){
            val2 = b;
        }
        void printData(){
            cout << "val2 = " << val2 << endl;
        }
};

void exchange (C1 &x, C2 &y){
    int temp;
    temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    C1 p;
    C2 q;
    p.setData(76);
    q.setData(87);
    cout << "Before the swap: \n";
    p.printData();
    q.printData();
    exchange(p,q);
    cout << "\nAfter the exchange:\n";
    p.printData();
    q.printData();
    return 0;
}