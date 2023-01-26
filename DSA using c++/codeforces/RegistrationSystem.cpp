#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    map<string,int> names;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        names[s]++;
        if(names[s]>1){v[i]=s+to_string(names[s]-1);}
        else v[i]="OK";
    }
    for(auto it:v){cout<<it<<endl;}
    return 0;
}

