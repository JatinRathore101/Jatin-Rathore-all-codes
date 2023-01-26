#include<bits/stdc++.h>
using namespace std;

void disp(map<int,string> &m)
{
    cout<<endl;
    for(auto it:m){cout<<it.first<<"  "<<it.second<<endl;}
    cout<<endl;
}

int main()
{
    map<int,string> m;
    m.insert({rand()%10+6,"Victor"});
    m.insert({rand()%20-4,"Mark"});
    m.insert({rand()%30+5,"Anthony"});
    m.insert({rand()%40-8,"Henry"});
    m.insert({rand()%50+4,"Louis"});
    m.insert({rand()%60-3,"Peter"});
    m.insert({rand()%70+2,"Cyril"});
    m.insert({rand()%80-10,"John"});
    disp(m);

    auto it=m.find(1);
    cout<<"at 1 -> "<<m[1]<<endl;

    it=m.find(7);
    m.erase(it); // erase will input either iterator or key
    disp(m);

    cout<<endl;
    m.erase(1);
    disp(m);

    return 0;
}
