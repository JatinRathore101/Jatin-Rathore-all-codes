/*
Longest Substring Without Repeating Characters

Given a string s, find the length of the longest substring without repeating characters.



Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.



Constraints:

    0 <= s.length <= 5 * 104
    s consists of English letters, digits, symbols and spaces.
*/

#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string &s)
{
    int n=s.size();
    if(n<=1){return n;}

    int l=1,i=0,j,k,flag1=0,flag2=0;

    while(i<n-1)
    {
        j=i+1;
        flag1=0;
        while(j<n)
        {
            if(flag1==1){break;}
            k=j-1;
            while(k>=i)
            {
                if(s[k]==s[j])
                {
                    if(j==n-1){flag2=1;}
                    if(j-i>l){l=j-i;}
                    flag1=1;
                    break;
                }
                k--;
            }
            if(j==n-1)
            {
                if((flag2==0)&&(j-i+1>l)){l=j-i+1;}
                flag2=0;
                break;
            }
            j++;
        }
        i++;
    }
    return l;

}



int main()
{
    int n;cin>>n;
    string s;
    char ch;
    for(int i=0;i<n;i++)
    {
        ch=char('a'+rand()%7);
        s.push_back(ch);
    }
    for(auto it:s)
    {
        cout<<it;
    }
    int l=lengthOfLongestSubstring(s);
    cout<<endl<<l;

}


