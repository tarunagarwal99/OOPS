#include <iostream>
using namespace std;
//abstract base class have to contain one pure virtual function
class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() =0; //pure virtual function.(when we define pure virtual function then we have to redefine it in deived for its further use. )
};
class cwhVideo : public cwh
{
    float videolength;

public:
    cwhVideo(string s, float r, float vl) : cwh(s, r)
    {
        videolength = vl;
    }
    // void display()
    // {
    //     cout << "this is an amazing video with title:" << title << endl;
    //     cout << "rating of this video is:" << rating << " out of 5 star." << endl;
    //     cout << "the length of this video is :" << videolength << " minutes" << endl;
    // }
};
class cwhText : public cwh
{
    int words;

public:
    cwhText(string s, float r, int wo) : cwh(s, r)
    {
        words = wo;
    }
    void display()
    {
        cout << "this is an amazing text tutorial with title:" << title << endl;
        cout << "rating of this text tutorial is:" << rating << " out of 5 star." << endl;
        cout << "the words in this text tutorial is :" << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;
    // for videos
    // title = "django tutorial";
    // rating = 4.67;
    // vlen = 45.26;
    // cwhVideo dj(title, rating, vlen);
    // //dj.display();
    //for texts
    title = "django tutorial text";
    rating = 4.17;
    words = 458;
    cwhText djo(title, rating, words);
    //djo.display();
    cwh *sop[2]; //pointer objecet of cwh class
  //  sop[0] = &dj;
    sop[1] = &djo;
   // sop[0]->display();
    sop[1]->display();

    return 0;
}
//rules for virtual function
/*
1.They cannot be static.
2.They are accessed by object pointers.
3.Virtual can be a friend of another class.
4. A virtual function in base class might not be used.
5.If a virtual fucntion is defined in a base class,there is no necessity of redefining it in the derived class.
 */
