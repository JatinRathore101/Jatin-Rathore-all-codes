// C++ STL Standard Template Library

/*
containers -> complex datatypes like vector<> , set<> , pair<,> ,
 map<,> etc.

Iterators -> kind of pointers pointing to indeces of containers,
default iterators - .begin() , .end() etc.
Point to memory address of containers, begin(), end() etc.
Continuity, discontinuity of iterators.
Example- vector<int>::iterator i1;

Algorithm

Functors -> Classes which can act as functions.
*/

/*
CONTAINERS
-Sequencial -> vectors, stack, queue, pair(pair is not a container)
-Ordered -> map, multimap, set, multiset
-Unordered -> unordered map, unordered set
*/

/*
NESTED CONTAINERS EXAMPLES
vector<vector<int>>;
map<int,vector<int>>;
set<pair<int,string>>;
vector<map<int,set<int>>>;
*/









// pairs in STL
/*
used to maintain or join together any two datatypes or containers etc.
pair<any datatype or any container,any datatype or any container> p;
A // map // is just a dynamic sorted set of pair.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p,p1;
    p=make_pair(7,"Abhay"); // assigning values to pair using make_pair() function
    cout<<p.first<<"  "<<p.second<<"\n";
    p1={7,"Jatin"}; // easy syntax to assign values to a pair.
    cout<<p1.first<<"  "<<p1.second<<"\n";

    pair<int,string> p2=p; // a pair values can be directly assigned to another pair of same type
    cout<<p2.first<<"  "<<p2.second<<"\n";

    int a[]={1,2,3},b[]={4,5,6}; // if we wish to group their respective elements wrto index we can declare an array of pair or a vector of pair.

    pair<int,int> c[]={{1,4},{2,5},{3,6}};
    for(int i=0;i<3;i++)
    {
        cout<<c[i].first<<"  "<<c[i].second<<"\n";
    }


    return 0;

}

