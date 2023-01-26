#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;cin>>s;int d=0;
    if(s.size()>=7)
    {
        for(int i=0;i<=s.size()-7;i++)
        {
            int x=s[i];
            if(s[i]==x&&s[i+1]==x&&s[i+2]==x&&s[i+3]==x&&s[i+4]==x&&s[i+5]==x&&s[i+6]==x){d=1;break;}
        }
    }
    if(d==1)cout<<"YES";else cout<<"NO";
    return 0;
}

