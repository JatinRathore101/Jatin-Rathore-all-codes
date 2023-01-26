#include<bits/stdc++.h>
using namespace std;

/* // BRUTEFORCE // NAIVE
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    unordered_set<int> s;
    for(auto it:arr1){s.insert(it);}
    for(auto it:arr2){s.insert(it);}
    unordered_map<int,int> m1,m2;
    vector<int> v;
    for(auto it:s){m1[it]=0;m2[it]=0;}
    for(auto it:arr1){m1[it]++;}
    for(auto it:arr2){m2[it]++;}
    for(auto it:s)
    {
        int l=min(m1[it],m2[it]);
        if(l>0)
        {
            for(int i=0;i<l;i++)
            {v.push_back(it);}
        }
    }
    sort(v.begin(),v.end());
    return v;
}*/

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) // optimal
{// this approach is called 2 pointer approach
   int i = 0, j = 0;
   vector<int> ans;
   while(i<n && j<m){
if (arr1[i] == arr2[j]){
   ans.push_back(arr1[i]);
   i++;
   j++;

}
       else if(arr1[i]<arr2[j]){
      i++;
       }
       else {
       j++;
       }
       }
return ans;

}

int main()
{
    return 0;
}


