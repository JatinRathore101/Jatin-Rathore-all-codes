#include<bits/stdc++.h>
#include<limits>
using namespace std;

/*
unordered maps
maps and unordered maps have almost same functions.
What we need to focus here is :-
-inbuilt implementation
-time complexity(much faster than map)
-valid keys datatype(basic datatypes allowed)

order will not be maintained and some datatypes will not be
allowed rest all will be same as maps.
Here also duplicacy is not allowed.
So if we just wish to calculate frequency and order does not matter
then we must use unordered maps for much faster implementation.

Key datatypes allowed
map - int , float , double , long long , string , arrays , vectors , pairs and many more.
unordered map -  int , float , double , long long , string.
*/

/*
given N strings and Q queries, in each query you are given a
string, print frequency of that string.
*/

int main()
{
    unordered_map<string,int> m;
    int N;cin>>N;

    string s;

    for(int i=0;i<N;i++)
    {
        // discards the input buffer
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cin>>s;
        m[s]++;
    }

    int Q;cin>>Q;
    for(int i=0;i<Q;i++)
    {
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cin>>s;
        cout<<"\n"<<m[s];
    }

    return 0;
}

/*
multimap have only one thing extra => duplicate keys allowed.
sorting is pre-implemented just like map.
When we just need to maintain lexicographical order,and
frequency does not matters.
maintaining list of students paired with their respective
percentages where names can be same(duplicate)
*/

