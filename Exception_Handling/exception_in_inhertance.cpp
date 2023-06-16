#include<iostream>
using namespace std;
class Demo1{};
class Demo2 : public Demo1 {};

int main()
{
    
    for(int i=1; i<=2; i++)
    {
        try{
            if(i==1){
                throw Demo1();
            }
            else{
                throw Demo2();
            }
        }
        catch(Demo1 &e1){
            cout << "Demo1 class exception is found\n";
        }
        catch (Demo2 &e2){
            cout << "Demo2 class exception is found\n";
        }
    }
    return 0;
}

/*
o/p : Demo1 class exception is found
      Demo1 class exception is found
*/