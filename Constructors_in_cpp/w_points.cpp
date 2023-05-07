// Distance between two points 
#include<iostream>
#include<cmath>
using namespace std;

class Point {
    int x, y;
public:
    Point (int a, int b){
        x = a; 
        y = b;
    }
    friend float distance(Point, Point);
};

float distance (Point p, Point q)
{
    int X = (p.x - q.x)* (p.x - q.x);
    int Y = (p.y - q.y) * (p.y - q.y);
    float ans = sqrt(X+Y);
    return ans;
}

int main ()
{
    Point p(2,4), q(6,7);
    float dis = distance(p,q);
    cout << "The distance between p and q is: " << dis << endl;
    return 0;
}