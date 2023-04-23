#include<iostream>
using namespace std;
typedef struct point
{
    int x;
    int y;
}P;
int main()
{
  P p;
  p.x=100;
  p.y=50;
  cout<<p.x<<" "<< p.y<<endl;
  return 0;  
}
