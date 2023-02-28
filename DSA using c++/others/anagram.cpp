#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    int counter[26]={0};
    for(auto it:s){counter[it-'a']++;}
    for(auto it:t){counter[it-'a']--;}
    for(int i=0;i<26;i++){if(counter[i]!=0)return false;}
    return true;
}

int main()
{
    string s="ahagram";
    string t="nagaram";
    cout<<::boolalpha<<isAnagram(s,t);
    return 0;
}
