#include <iostream>
using namespace std;

class student {
    protected:
        int rollno;
    public:
        void  setno(void){
            cout<<"enter the roll no of the student "<<endl;
            cin>>rollno;
            // rollno = x; // use this for automatic declaration 
        }
        void getno(void){
            cout<<"the roll no of this student is "<<rollno<<endl;
        }
};

class exam : public student {
    protected :
        float maths ;
        float physics ;
    public:
        void setmarks(void){
            cout<<"enter the marks of student in maths "<<endl;
            cin>>maths;
            cout<<"enter the physics of student in maths "<<endl;
            cin>>physics;

            // maths = a;    //use this for automatic declaration  
            // physics = b;  //use this for automatic declaration
        }
        void getmarks(void){
            cout<<"the marks in maths are "<<maths<<endl;
            cout<<"the marks in physics are "<<physics<<endl;
        }
};

class result : public exam {
    float percentage;
    public:
        void display (){
            percentage = (maths+physics)/2;
            getno();
            getmarks();
            cout<<"the percentage of the student is "<<percentage<<"%"<<endl;
        }
};

int main(){
    result atharv;
    atharv.setno();
    atharv.setmarks();
    atharv.display();
    return 0;
}
