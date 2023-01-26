#include<bits/stdc++.h>
#include "tut104separateClass.h"
#include "tut104separateClass.cpp"
using namespace std;

// Placing classes in separate files // click new files // class...

/*
class tut104separateClass
{
        int x;
        vector<char> vc;
    public:
        tut104separateClass()
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
        void setx(int y)
        {
            x=y;
        }
        int getx()
        {
            return x;
        }
        void disp_vc()
        {
            for(int i=0;i<vc.size();i++)
            {
                cout<<vc[i]<<"  ";
            }
            cout<<endl;
        }
};*/


int main()
{
    tut104separateClass A;
    cout<<A.getx()<<endl;
    A.disp_vc();
    A.setx(10);
    cout<<A.getx()<<endl;
    return 0;
}
