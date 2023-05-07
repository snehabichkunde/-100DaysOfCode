// Parameterized constructor 
#include<iostream>
using namespace std;
class Point {
    int x, y;
public:
    Point(int a, int b)   // parameterized constructor as is takes any arguments
    {
        x = a;
        y = b;
    }
    void printPoint(){
        cout << "Your point: (" << x << "," << y << ")" << endl;
    }

};

int main ()
{
    // Implicite call 
    Point p(3,4);

    // Explicite call
    Point q = Point (5,6);

    p.printPoint();
    q.printPoint();
    return 0;
}