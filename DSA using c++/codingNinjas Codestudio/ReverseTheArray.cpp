#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
    /*int i=m+1,j=arr.size()-1;
    while(i<j){swap(arr[i],arr[j]);i++;j--;}*/
    reverse(arr.begin()+m+1,arr.end());
    for(auto it:arr){cout<<it<<" ";}
}

int main()
{
    int t;cin>>t;
    while(t>0)
    {
        int m,n;cin>>n>>m;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;arr.push_back(x);
        }

        reverseArray(arr,m);
        t--;
    }
    return 0;
}

