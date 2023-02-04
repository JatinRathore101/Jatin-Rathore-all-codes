#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> s;
    long long y;cin>>y;

    for(int i=0;i<n;i++)
    {
        int x=y%10;y/=10;
        if(x==2||x==3||x==5||x==7){s.push_back(x);}
        else if(x==4){s.push_back(2);s.push_back(2);s.push_back(3);}
        else if(x==6){s.push_back(3);s.push_back(5);}
        else if(x==8){s.push_back(2);s.push_back(2);s.push_back(2);s.push_back(7);}
        else if(x==9){s.push_back(2);s.push_back(3);s.push_back(3);s.push_back(7);}
    }

    sort(s.begin(),s.end());

    for(int i=s.size()-1;i>=0;i--)
    {
        cout<<s[i];
    }
    return 0;
}

