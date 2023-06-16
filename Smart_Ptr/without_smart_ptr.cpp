#include<iostream>
using namespace std;
class Point{
    int X,Y;
    public:
        Point(int x=0, int y=0): X(x), Y(y){
            cout << "Constructor called\n";
        }
        ~Point (){
            cout << "Desctructor called\n";
        }
};
int main()
{
    cout << "Inside main\n";
    {
        cout << "Creating object\n";
        Point *ptr;
    }
    {
        cout << "Creating another object\n";
        Point A;
    }
    return 0;
}

/*
O/P:
Inside main
Creating object
Creating another object
Constructor called
Desctructor called
*/

// Here we can see 1st object never got destroyed 