#include<iostream>
using namespace std;

class father
{
public:
    int hieght;
    int age;

    father()
    {
        age=59;
        hieght=177;
        cout<<"\nfather constructor called\n";
    }
};



class son:public father
{
    int standard;
public:
    son()
    {   age=17;
        standard=11;
        cout<<"\nson constructor called\n";
    }
    void dispdata()
    {
        cout<<"\nage = "<<age<<"\nhieght = "<<hieght<<"\nstandard = "<<standard;
    }
};

// As soon as the derived class object is made it first calls base class constructor instead of its own constructor

int main()
{
    son s1;
    s1.dispdata();

    return 0;
}

