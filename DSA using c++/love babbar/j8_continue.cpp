#include<bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=0;i<10;i++)
    {
        if((i%3==0)||(i%7==1))continue;
        cout<<i<<"  ";
    }


    cout<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<i<<"  ";
        continue;
        cout<<-1*i<<"  "; // this part in loop has become unreachable
    }


    cout<<endl;
    int i=1;
    while(i<10)
    {
        if((i%3==0)||(i%7==1))
        {
            cout<<i<<"  ";
            i++;
        }
        else if(i<7)
        {
            i++;
            continue;
        }
        else
        {
            break;
        }
    }


    return 0;
}

