// Array of objects
#include<iostream>
using namespace std;

class shopItem {
    int Id;
    float price;
    public:
        void setData(int a, float b){
            Id = a;
            price = b;
        }
        void getData (){
            cout << "The price of item with Id " << Id << " is " << price << endl;
        }
};

int main()
{
    int size =4;
    shopItem *ptr = new shopItem[size];
    shopItem * ptrTemp = ptr;
    int p;
    float q;
    for (int i=0; i<size; i++)
    {
        cout << "Enter the Id and the price of item : ";
        cin >> p >> q;
        ptr->setData(p,q);
        ptr++;
    }

    for (int j=0; j<size; j++)
    {
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}