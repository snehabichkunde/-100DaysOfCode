#include<iostream>
using namespace std;
#include<memory>
class Rectangle{
    int length, bredth;
    public:
    Rectangle(int l=0, int b=0):length(l), bredth(b) {}
    int Area(){
        return (length*bredth);
    }
};

int main()
{
    shared_ptr<Rectangle>P1(new Rectangle(3,7));
    shared_ptr<Rectangle>P2;
    P2 = P1;
    cout << P1->Area() << endl;   //21
    cout << P2->Area() << endl;    // 21
    cout << P1.use_count() << endl;    // 2
    cout << P2.use_count() << endl;    // 2
    return 0;
}