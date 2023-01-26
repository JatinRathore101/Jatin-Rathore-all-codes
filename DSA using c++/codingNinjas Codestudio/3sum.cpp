#include<bits/stdc++.h>
using namespace std;

/*
// NAIVE

vector<vector<int>> findTriplets(vector<int>arr, int n, int K)
{
    vector<vector<int>> V;
    set<vector<int>> S;
    sort(arr.begin(),arr.end());
    int i=0;
    while(i<n-2)
    {
        int j=i+1;
        while(j<n-1)
        {
            int k=j+1;
            while((k<n)&&((arr[i]+arr[j]+arr[k])<=K))
            {
                if((arr[i]+arr[j]+arr[k])==K)
                {
                S.insert({arr[i],arr[j],arr[k]});
                }
                k++;
            }
                j++;
            }
            i++;
     }
    for(auto it:S)
    {
        V.push_back(it);
    }
    return V;
}

*/

// Optimum approach

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>> V;
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++)
    {
        int target = K-arr[i];
        int j=i+1, k=n-1;
        while(j<k)
        {
            if(arr[j] + arr[k] == target)
            {
                V.push_back({arr[i], arr[j], arr[k]});
                while(j<k && arr[j] == arr[j+1]) j++;
                while(j<k && arr[k] == arr[k-1]) k--;
                j++;
                k--;
            }
            else if(arr[j] + arr[k] > target)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
        while(i+1<n && arr[i] == arr[i+1]) i++;
    }
    return V;
}


int main()
{
    int n,k;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        a[i]=x;
    }
    cin>>k;
    vector<vector<int>> V=findTriplets(a,n,k);

    for(auto it:V)
    {
        for(auto it2:it)
        {
            cout<<it2<<" ";
        }
        cout<<endl;
    }

    return 0;
}
