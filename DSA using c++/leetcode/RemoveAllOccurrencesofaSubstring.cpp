#include<bits/stdc++.h>
using namespace std;

void disp(string s)
{
    for(auto it:s){cout<<it;}
}


string removeOccurrences(string s, string part)
{
    while(s.find(part)>=0&&s.find(part)<s.size())
    {
        s.erase(s.find(part),part.size());
    }
    return s;
}


int main()
{
    string s="jabvnsobvinbvacambv",part="bv";
    disp(s);cout<<endl;disp(part);cout<<endl;
    s=removeOccurrences(s,part);
    disp(s);
    return 0;
}
