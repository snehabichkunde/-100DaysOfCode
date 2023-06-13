#include<iostream>
using namespace std;
class Point{
    int x,y;
    public:
    Point (int x=0, int y=0): x(x), y(y){}
    void print(){
        cout << x << " " << y << endl;
    }
};
int main()
{
    Point p(20,20);
    p.print();   // 20 20
    p = 30;
    p.print();   // 30 0
    return 0;
}