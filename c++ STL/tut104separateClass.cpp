#include<bits/stdc++.h>
#include "tut104separateClass.h"
using namespace std;


tut104separateClass::tut104separateClass()
{
    x=1;
    int j=rand()%20+10;
    while(j>0)
    {
        if(j%2==0)
        {
            vc.push_back('a');
        }
        else if(j%7==2)
        {
            vc.push_back('b');
        }
        else
        {
            vc.push_back('c');
        }
        j--;
    }
}


void tut104separateClass::setx(int y)
{
    x=y;
}


int tut104separateClass::getx()
{
    return x;
}


void tut104separateClass::disp_vc()
{
    for(int i=0;i<vc.size();i++)
    {
        cout<<vc[i]<<"  ";
    }
        cout<<endl;
}
