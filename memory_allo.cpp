#include <iostream>
using namespace std;

class Shop
{
    int itemID[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);  
    void display(void);
};

void Shop ::setprice(void)
{
    cout << "Enter the id of your item no " << counter+1 << endl;
    cin >> itemID[counter];
    cout << "Enter the price of item no " << counter+1 << endl;
    cin >> itemprice[counter];
    counter++;
}

void Shop ::display(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item no " << itemID[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.display();
    return 0;
}