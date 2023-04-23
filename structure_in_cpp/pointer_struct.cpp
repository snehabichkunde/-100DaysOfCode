// pointer to structure element
#include<iostream>
using namespace std;
struct point{
    int x;
    int y;
};
int main()
{
    point p = {30, 20};
    point *ptr = &p;
    cout << ptr -> x << " " << ptr -> y << endl;
    return 0;
}