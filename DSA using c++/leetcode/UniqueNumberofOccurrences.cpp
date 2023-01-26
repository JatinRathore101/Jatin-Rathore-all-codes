#include<bits/stdc++.h>
using namespace std;

/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique, or false otherwise.

 

Example 1:

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Example 2:

Input: arr = [1,2]
Output: false

Example 3:

Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true

 

Constraints:

    1 <= arr.length <= 1000
    -1000 <= arr[i] <= 1000


*/

    bool uniqueOccurrences(vector<int>& arr)
    {
        int a[2001]={0};
        for(int i=0;i<arr.size();i++)
        {
            a[arr[i]+1001]++;
        }

        vector<int> b;
        for(int i=0;i<2001;i++)
        {
            if(a[i]!=0)
            {b.push_back(a[i]);}
        }

        sort(b.begin(),b.end());


        for(int i=0;i<b.size()-1;i++)
        {
            if(b[i]==b[i+1])return 0;
        }
        return 1;
    }

    /* //more optimized approach

    bool uniqueOccurrences(vector<int>& arr)
    {
        map<int,int>mp;
        set<int>st;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for( auto i : mp)
        {
            st.insert(i.second);
        }
       if(mp.size()==st.size())
       {
           return true;
       }
        return false;
    }

    */


int main()
{

    return 0;
}
