#include<bits/stdc++.h>
using namespace std;

string replaceSpaces(string str)
{
    string str2="";
    for(auto it:str)
    {
        if(it==' '){str2+="@40";}
        else{str2+=it;}
    }
    str.clear();
    str=str2;
    return str2;
}

int main()
{
    string s=replaceSpaces("ad cjkjh 90 7 a");
    for(auto it:s){cout<<it;}
    return 0;
}
