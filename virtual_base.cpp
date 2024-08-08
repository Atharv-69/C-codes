#include <iostream>
using namespace std;

// student --- test
// student --- sport
//test --- result 
//sport --- result 

class student{
    protected:
        int rollno;
    public:
        void setno(void){
            cout<<"enter the roll no of the student"<<endl;
            cin>>rollno;
        }
        void printno(void){
            cout<<"roll no of the student is "<<rollno<<endl;
        }
};

class test : virtual public student {
    protected:
        float maths,physics,chem;
        public:
        void setmarks(void){
            cout<<"enter the marks of student in maths "<<endl;
            cin>>maths;
            cout<<"enter the marks of student in physics "<<endl;
            cin>>physics;
            cout<<"enter the marks of student in chem "<<endl;
            cin>>chem;
        }
        void printmarks(void){
            cout<<"you have obtained "<<maths<<" marks in maths "<<endl;
            cout<<"you have obtained "<<physics<<" marks in physics "<<endl;
            cout<<"you have obtained "<<chem<<" marks in chem "<<endl;
        }
};

class sport : virtual public student {
    protected:
        float score;
    public:
        void setscore(void){
            cout<<"enter the score of student "<<endl;
            cin>>score;
        }
        void printscore(void){
            cout<<"The score of student is "<<score<<endl;
        }
};

class result : public test , public sport {
    float total;
    public:
        void display(void){
            total = maths + physics + score;
            printno();
            printmarks();
            printscore();
        }
};

int main(){
    result atharv;
    atharv.setno();
    atharv.setmarks();
    atharv.setscore();
    atharv.display();
    return 0;
}