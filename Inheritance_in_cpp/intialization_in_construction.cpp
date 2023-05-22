#include<iostream>
using namespace std;

class Test {
    int a;
    int b;
    public:
        //Test (int i, int j) : a(i), b(j)     --> correct
        // Test (int i, int j): a(i), b(i*j)  --> correct
        //Test (int i, int j): a(i), b(a*j);   --> correct

        // Test (int i, int j): b(i). a(b*j)  --> red flag
        // the complire wont show any mistake but as a get initilized 
        // It will give the garbage valur

        Test (int i, int j): a(i), b(a*j){
            cout << a << endl;   
            cout << b << endl;  
        }

};

int main ()
{
    Test T(2,4);
    return 0;
}