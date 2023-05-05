#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter() { counter = 0; }
    void getPrice();
    void printPrice();
};

void shop ::getPrice()
{
    cout << "Enter the Id of item no. " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop::printPrice()
{
    for (int i = 0; i < counter; i++)
        cout << "The price of the item with Id " << itemId[i] << "is " << itemPrice[i] << endl;
}

int main()
{
    shop dukan;
    dukan.initCounter();
    for (int i=0; i<10; i++)
        dukan.getPrice();
    dukan.printPrice();
    return 0;
}