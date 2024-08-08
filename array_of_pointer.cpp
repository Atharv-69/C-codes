#include <iostream>
using namespace std;

class  shop{
    int id;
    float price;
    public:
        void setdata(int a , float  b){
            id = a;
            price = b;
        }
        void display(void){
            cout<<"Code of this item is "<<id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};

int main(){
    int size = 3;
    shop *ptr = new shop[size];
    shop *ptrtemp = ptr;
    int p,i;
    float q;
    for(i=0;i<size;i++){
        cout<<"enter the id and price of the item "<<endl;
        cin>>p>>q;
        ptr -> setdata(p,q);
        ptr++;
    }
    for(i=0;i<size;i++){
        cout<<"Item id "<<i+1<<endl;
        ptrtemp->display();
        ptrtemp++;
    }
    return 0;
}