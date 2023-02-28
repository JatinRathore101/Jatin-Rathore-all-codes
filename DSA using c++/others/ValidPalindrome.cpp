#include<bits/stdc++.h>
using namespace std;

/*
bool isPalindrome(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s.size()<=0){break;}
        if(!isalnum(s[i])){s.erase(s.begin()+i);i--;}
        if(s.size()<=0){break;}
        if(isalpha(s[i])){s[i]=tolower(s[i]);}
    }


    for(int i=0;i<s.size();i++)
    {
        if(s.size()<=0){break;}
        if(s[i]!=s[s.size()-i-1]){return false;}
    }

    return true;
}*/

bool isPalindrome(string s)
{
    string s1;
    for(int i=0;i<s.size();i++)
    {
        if(s.size()<=0){break;}
        if(isalnum(s[i]))
        {
            if(isalpha(s[i])){s[i]=tolower(s[i]);}
            s1.push_back(s[i]);
        }
    }

    for(int i=0;i<s1.size();i++)
    {
        if(s1.size()<=0){break;}
        if(s1[i]!=s1[s1.size()-i-1]){return false;}
    }

    return true;
}

int main()
{
    string s=".a";
    cout<<::boolalpha<<isPalindrome(s);
    return 0;
}

