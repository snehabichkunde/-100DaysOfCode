#include<iostream>
using namespace std;

class Point {
    int X, Y;
public:
    Point(int x = 0, int y = 0) : X(x), Y(y) {
        cout << "Constructor called\n";
    }
    ~Point() {
        cout << "Destructor called\n";
    }
};

class SP {
    Point* ptr;
public:
    SP(Point* ptr = nullptr) : ptr(ptr) {}
    ~SP() {
        if (ptr != nullptr) {
            delete ptr;
        }
    }
    Point& operator*() {
        return *ptr;
    }
    Point* operator->() {
        return ptr;
    }
};

int main() {
    cout << "Inside main\n";
    {
        cout << "Creating object\n";
        SP sp1(new Point(1, 2));
        cout << "Using smart pointer\n";
        //cout << sp1->X << ", " << sp1->Y << endl;
    }
    {
        cout << "Creating another object\n";
        SP sp2(new Point(3, 4));
        cout << "Using smart pointer\n";
        //cout << (*sp2).X << ", " << (*sp2).Y << endl;
    }
    return 0;
}
