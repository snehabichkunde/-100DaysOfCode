// type punnig 
#include<iostream>
using namespace std;
union test1{
    int x;
    float y;
};
union test2{
    int x;
    char bin[7];
    char s;
};
int main()
{
    test1 t1;
    t1.y = 23.56;
    test2 t2;
    t2.s = 'y';
    cout << "Size of test1 = " << sizeof(test1) << endl;    // 4
    cout << "Size of test2 = " << sizeof(test2) << endl;    // 8
    cout << t1.x << endl;
    cout << t2.x << endl;
}
