#include<iostream>
#include<cstring>
using namespace std;

// Completely same concept that we saw in tut65 and tut66

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display(){}   // declared virtual, hence display from derived classes are now able to be invoked using base class pointers pointing at derived class objects
};

class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s, r) // format for calling derived class constructor, the arguments for inherited variables of parameterized base class constructor has to be mentioned
        {
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};

class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s, float r, int wc): CWH(s, r) // format for calling derived class constructor, the arguments for inherited variables of parameterized base class constructor has to be mentioned
        {
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen); // Derived class_1 object created, and initialized

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words); // Derived class_2 object created, and initialized

    CWH* tuts[2];                         // Two pointers of base class type created as contigious or in array
    tuts[0] = &djVideo;                   // first pointer of base class type starts pointing to Derived class_1 object
    tuts[1] = &djText;                    // second pointer of base class type starts pointing to Derived class_2 object

    tuts[0]->display();                   // since the display in base is // virtual // declared , hence it will execute Derived class_1 display()
    tuts[1]->display();                   // since the display in base is // virtual // declared , hence it will execute Derived class_2 display()

    return 0;
}

/*
Rules for virtual functions
 They cannot be static
 They are accessed by object pointers
 Virtual functions can be a friend of another class
 A virtual function in the base class might not be used.
 If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/
