#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(isalpha(s[i])){s[i]=tolower(s[i]);}
        if(!iswalnum(s[i])){s.erase(i,1);i--;}
    }

    int i=0,j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j]){return false;}
        i++;j--;
    }

    return true;
}

int main()
{
    bool a=checkPalindrome("c1 O$d@eeD o1c");

    cout<<a;

    return 0;
}

