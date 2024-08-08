#include <iostream>
using namespace std;

class product
{
public:
    int purchases;
    int reviews;
    float rating;
    int no_rating;
    void setall(void)
    {
        cout << "Enter the number of purchases of the item " << endl;
        cin >> purchases;
        cout << "Enter the number of people who put up the reviews " << endl;
        cin >> reviews;
        cout << "The total rating for this product " << endl;
        cin >> rating;
        cout << "The number of people who put up the ratings " << endl;
        cin >> no_rating;
    }
    void check(void)
    {
        if (no_rating > purchases)
        {
            cout << "The product has fake ratings " << endl;
            cout << "This product is not guaranteed to be legit " << endl;
        }
        else if (no_rating == purchases)
        {
            cout << "This product may have fake ratings" << endl;
        }
        else if (no_rating < purchases)
        {
            cout << "This product has real ratings" << endl;
            cout << "This product is very legitimate" << endl;
        }
    }
};

int main()
{
    product p;
    p.setall();
    p.check();
    return 0;
}
