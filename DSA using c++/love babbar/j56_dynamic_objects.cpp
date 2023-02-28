#include<bits/stdc++.h>
using namespace std;

class Hero
{
    int height_in_cm;
    int weight_in_kg;
    int chest_in_inches;
    int waist_in_inches;
public:
    Hero()
    {
        height_in_cm=171;
        weight_in_kg=71;
        chest_in_inches=45;
        waist_in_inches=34;
    }

    Hero(int a,int b,int c,int d)
    {
        height_in_cm=a;
        weight_in_kg=b;
        chest_in_inches=c;
        waist_in_inches=d;
    }

    int get_height()
    {
        return height_in_cm;
    }

    int get_weight()
    {
        return weight_in_kg;
    }
};

class river
{
    int width;
public:
    river(int width)
    {
        this->width=width;
    }
    int get_width()
    {
        return width;
    }
};

int main()
{
    Hero h1;// static
    Hero* H2 = new Hero;
    Hero* H3 = new Hero(172,74,42,32); // calling parameterized constructor for dynamic object

    cout<<"h1.get_height() = "<<h1.get_weight()<<endl;
    cout<<"(*H2).get_weight() = "<<(*H2).get_weight()<<endl;
    cout<<"H3->get_weight() = "<<H3->get_weight()<<endl;

    river r1(10);
    //river r2;  // this line will give error now as ,as soon as we make a constructor , the default constructor dies
    cout<<"r1.get_width() = "<<r1.get_width()<<endl;
    return 0;
}

