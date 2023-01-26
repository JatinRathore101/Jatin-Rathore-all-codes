#include<bits/stdc++.h>
using namespace std;

/*
set, unordered set, multiset
are same as map, unordered map, multimap

here the only difference between respective types of map and set
is that
a map stores pair of two datatypes or containers
whereas a set stores only one datatype or container

set - sorted and no duplicacy allowed
unordered set - not sorted but no duplicacy allowed
multiset - sorted but duplicacy allowed
*/

void print(set<string> &s)
{
    cout<<"\n\ndisplaying set :-\n";
    for(auto it:s)
    {
        cout<<it<<"  ";
    }
    cout<<"\n\n";
}

int main()
{
    set<string> s;
    s.insert("Abhay");
    s.insert("Abhay");
    s.insert("Billionare");
    s.insert("Heir");
    s.insert("ijsd");
    s.insert("ijsd");
    s.insert("Billionare");

    print(s);
    // set_name.erase(value or iterator)
    // gives error if no such value found or iterator= (.end())
    auto it=s.find("ijsd");
    if(it!=s.end())
    {
        s.erase(it);
    }
    else
    {
        cout<<"Element not found";
    }

    print(s);

    it=s.find("taquilla");
    if(it!=s.end())
    {
        s.erase(it);
    }
    else
    {
        cout<<"Element not found";
    }

    print(s);

    s.clear();

    return 0;
}

