#include <iostream>
using namespace std;

// ---------------------------------------------------------------------------
// Ambiguity number 1


// class base1{
//     public:
//         void greet(){
//             cout<<"hello bro"<<endl;
//         }
// };

// class base2{
//     public:
//         void greet(){
//             cout<<"kaise  ho bro "<<endl;
//         }
// };

// class deriv : public base1 , public base2 {
//     int a; 
//     public:
//         void greet(){
//         base1::greet();
//         }
// };

// int main(){
//     base1 obj1;
//     base2 obj2;
//     // obj1.greet();
//     // obj2.greet();
//     deriv d;    
//     d.greet();
//     return 0;
// }





// ---------------------------------------------------------------------
//  ambiguity  number  2

class b {
    public:
        void say(){
            cout<<"hello world "<<endl;
        }
};

 
class c : public b {
    int a; 
    public:
    // this new say function will overwrite the say function of class b 
    // if this new function is not presernt then say function  will be derived from class b 
        void say(){ 
            cout<<"hello world and its people"<<endl;
        }
};

int main(){
    b x;
    x.say();
    c y;
    y.say();
    return 0;
}
