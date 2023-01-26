#include<bits/stdc++.h>
using namespace std;

/*
Longest Palindromic Substring

Given a string s, return the longest palindromic substring in s.
A string is called a palindrome string if the reverse of that
string is the same as the original string.

Constraints:
-   1 <= s.length <= 1000
-   s consist of only digits and English letters.

*/

int lengthPalindrome(string &s,int left,int right)
{
    int mid=(left+right)/2+1;
    for(int i=left;i<=mid;i++)
    {
        if(s[i]!=s[right+left-i])
        {return -1;}
    }
    return right-left+1;
}





string subString(string &s,int left,int right)
{
    string t;
    for(int i=left;i<=right;i++)
    {
        t.push_back(s[i]);
    }
    return t;
}





string longestPalindrome(string s)
{
    int n=s.size();
    if(n<=1){return s;}
    int left,right,l=1;
    string t;

    unordered_map<char,vector<int>> m;
    int index=0;
    for(auto p:s)
    {
        m[p].push_back(index);
        index++;
    }

    for(auto it:m)
    {
        for(int i=0;i<it.second.size();i++)
        {
            left=it.second[i];
            for(int j=i;j<it.second.size();j++)
            {
                right=it.second[j];
                if(right-left+1>l)
                {
                    int temp=lengthPalindrome(s,left,right);
                    if(temp>l)
                    {
                        l=temp;
                        t=subString(s,left,right);
                    }
                }
            }
        }
    }

    if(t.size()==0){t.push_back(s[0]);}
    return t;
}

int main()
{
    int n;cin>>n;
    string s;char ch='a';
    for(int i=0;i<n;i++){ch=char('a'+rand()%7);s.push_back(ch);cout<<ch;}
    string t=longestPalindrome(s);

    cout<<endl<<endl<<t;
    return 0;
}

