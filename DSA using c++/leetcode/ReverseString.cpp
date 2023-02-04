#include<bits/stdc++.h>
using namespace std;

void reverseString(vector<char>& s)
{
    int i=0;
    while(i<s.size()/2)
    {swap(s[i],s[s.size()-i-1]);i++;}
}

int main()
{
    vector<char> s={'e','r','o','h','t','a','R',' ','n','i','t','a','J'};
    reverseString(s);
    for(auto it:s){cout<<it;}
    return 0;
}

