#include <iostream>
using namespace std;

class chaai{
    public:
        int chai_cup;
        int mithas;
        float pani_cup;
        float doodh_cup;
        float adrak;
        int time = 15;
        int purity;
        float cheeni_chammach;
        void kitni_meethi(void){
            cout<<"Aapko kitni meethi chai peeni se ek se teen tak ke paimane pe bataye "
            <<"1 matlab bht kam meethi, 2 matlab thodi meethi , 3 matlab bohot meethi"<<endl;
            cin>>mithas;
        }
        void kitne_cup_chai(void){
            cout<<"Aapko kitne cup chai banani hai"<<endl;
            cin>>chai_cup;
        }
        void kitni_pure(void){
            cout<<"aapko kitni shudh chai chahiye 3 ke paimane pe bataye 3 matlab bohot jyada shudh,"
            <<" 2 mtlb theek thaak shudh, 1 matlab garam pani jaisi chai"<<endl;
            cin>>purity;
        }
};

class recipe : public chaai{
    public:
        void chai_recipe(void){
            if(purity==3){
            pani_cup = 0;
            doodh_cup = chai_cup;
            adrak = 0.5*(chai_cup);
                if (mithas==3){
                    cheeni_chammach = chai_cup + 0.5*(chai_cup);
                }  
                else if(mithas==2){
                    cheeni_chammach = chai_cup;
                }
                else if(mithas==1){
                    cheeni_chammach = 0.5*(chai_cup);
                }
                cout<<"Ekdum shudh "<<chai_cup<<" cup chai banane ke liye aap :"<<endl<<doodh_cup<<" cup doodh le, "
                <<endl<<pani_cup<<" cup pani le "<<endl<<adrak<<" inch adrak ka piece "<<endl<<cheeni_chammach
                <<" chammach cheeni le "<<time<<" min tak pakaye aur chai ka luft uthaye."<<endl;
            }

            if(purity==2){
            pani_cup = 0.75*(chai_cup);
            doodh_cup = 0.5*(chai_cup);
            adrak = 0.5*(chai_cup);
                if (mithas==3){
                    cheeni_chammach = chai_cup + 0.5*(chai_cup);
                }  
                else if(mithas==2){
                    cheeni_chammach = chai_cup;
                }
                else if(mithas==1){
                    cheeni_chammach = 0.5*(chai_cup);
                }
                cout<<"Theek thaak shudh "<<chai_cup<<" cup chai banane ke liye aap :"<<endl<<doodh_cup<<" cup doodh le, "
                <<endl<<pani_cup<<" cup pani le "<<endl<<adrak<<" inch adrak ka piece "<<endl<<cheeni_chammach
                <<" chammach cheeni le "<<time<<" min tak pakaye aur chai ka luft uthaye."<<endl;
            }

            if(purity==1){
            pani_cup = chai_cup;
            doodh_cup = 0.5*(chai_cup);
            adrak = 0.5*(chai_cup);
                if (mithas==3){
                    cheeni_chammach = chai_cup + 0.5*(chai_cup);
                }  
                else if(mithas==2){
                    cheeni_chammach = chai_cup;
                }
                else if(mithas==1){
                    cheeni_chammach = 0.5*(chai_cup);
                }
                cout<<"Pani wali "<<chai_cup<<" cup chai banane ke liye aap :"<<endl<<doodh_cup<<" cup doodh le, "
                <<endl<<pani_cup<<" cup pani le "<<endl<<adrak<<" inch adrak ka piece "<<endl<<cheeni_chammach
                <<" chammach cheeni le "<<time<<" min tak pakaye aur chai ka luft uthaye."<<endl;
            }
        }
};

int main(){
    recipe chai;
    chai.kitne_cup_chai();
    chai.kitni_meethi();
    chai.kitni_pure();
    chai.chai_recipe();
    return 0;
}