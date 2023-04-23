// defoult value of struct varible
#include<iostream>
using namespace std;
struct point {
    int x;
    int y;
};
int main()
{
    point z = {.y= 34};
    cout << z.x << " " << z.y << endl; 
}
