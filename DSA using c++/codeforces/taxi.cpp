#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    map<int,int> s;
    s[1]=0;s[2]=0;s[3]=0;s[4]=0;
    for(int i=0;i<n;i++){int x;cin>>x;s[x]++;}
    int t=s[4]+s[2]/2;
    s[2]=s[2]%2;

    while(s[1]>0&&s[3]>0)
    {
        s[1]--;s[3]--;t++;
    }

    while(s[3]>0){s[3]--;t++;}

    if(s[2]==1)
    {
        if(s[1]>1){s[2]--;s[1]-=2;t++;}
        else if(s[1]==1){s[2]--;s[1]--;t++;}
        else{s[2]--;t++;}
    }

    if(s[1]%4==0){t+=s[1]/4;}
    else {t+=s[1]/4+1;}

    cout<<t;

    return 0;
}

