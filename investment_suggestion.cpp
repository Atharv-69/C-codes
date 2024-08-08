#include <iostream>
#include <cmath>
using namespace std;

class invest{
        float principal;
        float gold_return = 0.15; //15% return 
        float rd_return = 0.08; //8% return
        float fd_return = 0.07; //7% return
        int time; 
    public:
        
        void getval(void){
            cout<<"Enter the amount you want to deposit and the time for which you want to deposit (in years)"<<endl;
            cin>>principal>>time;
        }

        float principal_tempg=principal;
        float principal_tempf=principal;
        float principal_tempr=principal;

        void gold_returns(void){
            cout<<"Investing "<<principal<<" for "<<time<<" years in :"<<endl;
            int i;
            for(i=0;i<time;i++){
                principal_tempg = principal_tempg + (principal_tempg*(gold_return));
            }
            cout<<"Gold -> "<<principal_tempg<<endl;
        }

        void fd_returns(void){
            // cout<<"Investing "<<principal<<" for "<<time<<" years will give :"<<endl;
            int j;
            for(j=0;j<time;j++){
                principal_tempf = principal_tempf + (principal_tempf*(fd_return));
            }
            cout<<"Fd -> "<<principal_tempf<<endl;
        }

        void rd_returns(void){
            // cout<<"Investing "<<principal<<" for "<<time<<" years will give :"<<endl;
            int k;
            for(k=0;k<time;k++){
                principal_tempr = principal_tempr + (principal_tempr*(rd_return));
            }
            cout<<"Rd -> "<<principal_tempr<<endl;
        }

        void compare(void){
            if(principal_tempg>principal_tempf && principal_tempg>principal_tempr){
                cout<<"Investing in Gold will give you the highest amount of returns "<<endl;
            }
            else if(principal_tempf>principal_tempg && principal_tempf>principal_tempr){
                cout<<"Investing in Fixed deposit will give you highest amount of returns"<<endl;
            }
            else if(principal_tempr>principal_tempf && principal_tempr>principal_tempg){
                cout<<"Investing in Reccuring deposit will give you the highest amount of returns"<<endl;
            }
        }
};

int main(){
    invest money;
    money.getval();
    money.gold_returns();
    money.fd_returns();
    money.rd_returns();
    money.compare();
    return 0;
}    