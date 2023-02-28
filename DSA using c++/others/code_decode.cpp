#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=10000;
    while(i>0)
    {
        char ch='a'+(rand()%i)%30;

        if(i%27==0) cout<<" ; ";
        else if(i%297==2)cout<<rand()%i;
        else if(i%289==0)cout<<" MYSQL ";
        else if(i%273==0)cout<<" HTML+CSS ";
        else if(i%271==0)cout<<" MATLAB ";
        else if(i%247==0)cout<<" PYTHON ";
        else if(i%237==0)cout<<" C/C++ ";
        else if(i%2==0)cout<<ch;
        i--;
    }
    return 0;
}

