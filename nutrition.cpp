#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

class body{
    protected:
        int gender;
        double weight_kg;
        int age;
    friend class suggestion;
    public:
        void setdata(void){
            cout<<"Enter your gender (enter 1 for male and 0 for female):"<<endl;
            cin>>gender;
            cout<<"Enter your weight(in kg) :"<<endl;
            cin>>weight_kg;
            cout<<"Enter your age :"<<endl;
            cin>>age;
        }
};

class suggestion : public body{
    public:
    double weight_lbs = 2.20 * weight_kg;
        void water_intake(void){
            double water_oz = weight_lbs*0.5;
            double water_l = 33.81*water_oz;
            cout<<"For your weight you should have intake of "<<water_l<<"liter water in whole day."<<endl;
        }

        void protein_intake(void){
            float protein_daily;
            if(age>=2 && age<=18){
            protein_daily = 0.4*weight_kg;
            }
            else if(age>18 && age<30){
            protein_daily = 0.84 * weight_kg;
            }
            else{
            protein_daily = 0.5 * weight_kg;
            }
            cout<<"For your weight you should have intake of "<<protein_daily<<"grams of protein in a day."<<endl;
        }

        void calorie_intake(void){
            float calorie_intake;
            if(gender == 1){
                if (age>=2 && age<=8){
                    calorie_intake=1000;
                }
                else if(age>=9 && age<=13){
                    calorie_intake = 2100;
                }
                else if(age>=14 && age<=30){
                    calorie_intake = 2700;
                }
                else{
                    calorie_intake = 2300;
                }
            }
            if(gender == 2){
                if (age>=2 && age<=8){
                    calorie_intake=1000;
                }
                else if(age>=9 && age<=13){
                    calorie_intake = 1800;
                }
                else if(age>=14 && age<=30){
                    calorie_intake = 2200;
                }
                else{
                    calorie_intake = 2200;
                }
            }
            cout<<"You should have a daily intake of "<<calorie_intake<<"kcal of calories."<<endl;
        }
};

int main(){
    suggestion a;
    a.setdata();
    a.water_intake();
    a.protein_intake();
    a.calorie_intake();
    return 0;
}
