#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> v;
    sort(arr.begin(),arr.end());
    int i=0;
    while(i<arr.size()-1)
    {
        int j=i+1;
        while(((arr[i]+arr[j])<=s)&(j<arr.size()))
        {
            if((arr[i]+arr[j])==s)
            {
                v.push_back({arr[i],arr[j]});
            }
            j++;
        }
        i++;
    }
    return v;
}

int main()
{
    int n,s;
    cin>>n>>s;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        a[i]=x;
    }
    vector<vector<int>> v=pairSum(a,s);

    for(auto it:v)
    {
        cout<<it[0]<<" "<<it[1]<<endl;
    }
    return 0;
}

