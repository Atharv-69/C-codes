#include <iostream>
using namespace std;

class Points{
    float y;
    float m;

    public:
        float slope(float x1,float x2,float y1,float y2);
        float value(float x, float y1,float x1);
};

float Points :: slope (float x1,float x2,float y1,float y2){
    m = (y2 - y1)/(x2-x1);
    cout<<"the value of slope is "<<m<<endl;
}

float Points :: value(float x, float y1,float x1){
    y=y1+(m*(x-x1));
    cout<<"the value of y is "<<y<<endl;
}

int main(){
    Points cords;
    float x1,x2,y1,y2; // x1,y1 indicates the first point which we know exists in the graph ; x2,y2 is the ssecond point which wwe know exists on the graph 
    float x;           // x indicates the x cooordinate of point whose y  coordinate value we need to know
    cout<<"Enter the value of x"<<endl;
    cin>>x;
    cout<<"enter the value of lower coordinate of x"<<endl;
    cin>>x1;
    cout<<"enter the value of upper coordinate of x"<<endl;
    cin>>x2;
    cout<<"enter the value of lower coordinate of y"<<endl;
    cin>>y1;
    cout<<"enter the value of upper coordinate of y"<<endl;
    cin>>y2;
    cords.slope (x1,x2,y1,y2);
    cords.value(x,y1,x1);
    return 0;
}