#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;int d=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='h'&&d==0)
        {
            d=1;
        }
        else if(s[i]=='e'&&d==1)
        {
            d=2;
        }
        else if(s[i]=='l'&&d==2)
        {
            d=3;
        }
        else if(s[i]=='l'&&d==3)
        {
            d=4;
        }
        else if(s[i]=='o'&&d==4)
        {
            d=5;
        }
    }


    if(d==5)cout<<"YES";else cout<<"NO";
    return 0;
}

