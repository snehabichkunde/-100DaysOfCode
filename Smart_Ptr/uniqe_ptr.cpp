#include <iostream>
using namespace std;
#include <memory>
class Rectangle
{
    int length, bredth;

public:
    Rectangle(int l = 0, int b = 0) : length(l), bredth(b) {}
    int Area()
    {
        return (length * bredth);
    }
};
int main()
{
    unique_ptr<Rectangle>P1(new Rectangle(5,6));
    cout << P1->Area() << endl;
    
    unique_ptr<Rectangle>P2;
    P2 = move(P1);
    cout << P2->Area() << endl;

    //cout << P1->Area() << endl;
    // P1 is lost 
    // As uniqe_ptr stores oe pointer only
    return 0;
}