#include<bits/stdc++.h>
#include"j55_Hero.cpp"
using namespace std;

int main()
{
    j55_Hero h1;
    j55_Hero h2(173,72,43,34);
    cout<<h2.get_height()<<"  "<<h1.get_weight();
    return 0;
}




/*
// NORMAL CODE WITH INTERNAL CLASS

#include<bits/stdc++.h>
using namespace std;


class j55_Hero
{
    int height_in_cm;
    int weight_in_kg;
    int chest_in_inches;
    int waist_in_inches;
public:
    j55_Hero()
    {
        height_in_cm=171;
        weight_in_kg=71;
        chest_in_inches=44;
        waist_in_inches=36;
    }
    j55_Hero(int a,int b,int c,int d)
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



int main()
{
    j55_Hero h1;
    j55_Hero h2(173,72,43,34);
    cout<<h2.get_height()<<"  "<<h1.get_weight();
    return 0;
}
*/

