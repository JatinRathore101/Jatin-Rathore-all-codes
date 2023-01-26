#include<bits/stdc++.h>
using namespace std;

/*
multiset allows duplicate values, can be used instead
of priority key.
*/

void disp(multiset<string> &s) // use call by reference for speed
{
    cout<<"\n\ndisplaying multiset :-\n";
    for(auto &it:s) // use call by reference for speed
    {
        cout<<it<<"  ";
    }
    cout<<"\n\n";
}

int main()
{
    multiset<string> s;
    s.insert("abc"); // O(log(n)) ordered
    s.insert("zsdf");
    s.insert("cdf");
    s.insert("abc"); // duplicates allowed
    s.insert("abc");
    s.insert("zsdf");
    s.insert("xyz");
    s.insert("wstr");

    disp(s);

    /*
    multiset_name.erase(iterator or value); works in
    slightly different manner.

    multiset_name.erase(iterator) // removes only that
    perticular value to which iterator points and does not
    removes any of its duplicates if present in the multiset.

    but multiset_name.erase(value) // removes all such values
    along with duplicates from the set.

    moreover just like previous rule here also we need safety
    check, because if the value to be erased is not found or
    the iterater points to (.end()) then (.erase()) function
    gives an error.
    */

    auto it = s.find("zsdf");
    if(it!=s.end()){s.erase(it);}
    disp(s);


    s.erase("abc");
    disp(s);

    s.clear();
    disp(s);

    return 0;
}

