#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string str,str2;
    string abc = "hello this is new code";
    // this is to read from a file 
    ifstream in("file.txt");
    // in>>str;         // this will get us only one word and will skip/stop when a space or new line begins 
    getline(in,str);    // this will get us whole line in one command and we do not need to get each word one at a time 
    getline(in,str2);    

    // this is to write in a file 
    ofstream out("file.txt");
    out<<abc;           //we can also directly enter the line or sentence we need to write in the file 
    
    cout<<str<<endl;
    cout<<str2<<endl;
    return 0;
}