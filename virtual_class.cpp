#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};

class CWHvdo : public CWH
{
    float vdolength;

public:
    CWHvdo(string s, float r, int vl) : CWH(s, r)
    {
        vdolength = vl;
    }
    void display()
    {
        cout << "This is the tutorial of an vdo of code with harry" << endl;
    }
};

class CWHtext : public CWH
{
    int wordcount;

public:
    CWHtext(string s, float r, int wc) : CWH(s, r)
    {
        wordcount = wc;
    }
    void display()
    {
        cout << "This is the tutorial of text of code with harry" << endl;
    }
};

int main()
{
    string title;
    int words = 200;
    float rating, vlen;
    title = "pyhton tutorial";
    vlen = 4.56;
    CWHvdo djVideo(title, rating, vlen);
    CWHtext djtext(title, rating, words);
    // djVideo.display();
    CWH *ptr[2];
    ptr[0] = &djVideo;
    ptr[1] = &djtext;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}