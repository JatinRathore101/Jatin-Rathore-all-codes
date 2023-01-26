#include<bits/stdc++.h>
using namespace std;

/*
"auto" keyword - automatically determines datatype of a value.
auto a=1; => auto treats a as int.
auto a=1.5 => auto treats a as double or float.
auto keyword very useful in case of iterators.
*/

/*
map / unordered map / multimap

{key(datatype 1) value(datatype 2) pair}
map actually stores pair<,> as element in sorted order.

make_pair(,) can also be used to insert values in map.

map -> sorted automatically by keys , non duplicate storage, secondly by value
unordered map -> unsorted but non duplicate storage.

key -> unique
values -> may be same for different keys
*/

void disp(auto &m)
{
    cout<<"\n\ndisplaying map:-\n";
    for(auto &it:m)
    {
        cout<<it.first<<"  "<<it.second<<endl;
    }
    cout<<"\n\n";
}

int main()
{
    map<int,string> m;
    m[4]="abc";  // O(log(n)) time complexity due to inbuilt sorting implemented in map
    m[0]="7ax";  // n= current size of map.
    m[-10]="4110"; // O(log(3))
    m[10]="0aae"; // O(log(4))
    m[4]="cdc";   // overwrite
    m.insert({5,"awd"});
    m.insert(make_pair(12,"wds4"));

    map<int,string>:: iterator it;
    cout<<"displaying map:-\n";
    for(it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"  "<<(*it).second<<"\n";
    }

    cout<<"\n\ndisplaying map:-\n";
    for(auto &mp:m)
    {
        cout<<mp.first<<"  "<<mp.second<<"\n";
    }cout<<endl;


    /*
    datatype::iterator it=map_name.find(key_name)
    returns an iterator pointing to the key_name.
    if no key as key_name then it returns (.end()) iterator.
    Time complexity of (.find()) is O(log(n))
    */
    auto it1=m.find(0);
    if(it1==m.end())
    {
        cout<<"No value"<<endl;
    }
    else
    {
        cout<<it1->first<<"  "<<it1->second<<"\n";
    }

    it1=m.find(1); // already declared iterator it1
    if(it1==m.end())
    {
        cout<<"No value"<<endl;
    }
    else
    {
        cout<<it1->first<<"  "<<it1->second<<"\n";
    }cout<<endl;

    /*
    m.erase(key_name or iterator) removes the pair
    corresponding to that key_name or iterator. If that
    key_name does not exist in map or the iterator pointing
    next to the last element (.end()) , then (.erase())
    function gives an error so we need to implement a safety
    check.
    */

    it1=m.find(7);
    if(it1!=m.end())
    {
        m.erase(it1);
    }
    else
    {
        cout<<"\nvalue does not exist.";
    }

    disp(m);

    m.clear(); // deletes all elements of a map // map gets empty.

    disp(m);

    return 0;
}

