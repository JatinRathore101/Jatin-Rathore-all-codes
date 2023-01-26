#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++)
    {
        string s;cin>>s;
        v.push_back(s);
    }

    for(auto it:v)
    {
        if(it.size()>10)
        {
            string s1,s2,s3;
            s1=it[0];s2=to_string(it.size()-2);s3=it[it.size()-1];
            it.clear();
            it=s1+s2+s3;
        }cout<<it<<endl;
    }
    return 0;
}

