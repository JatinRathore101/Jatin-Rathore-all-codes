#include<bits/stdc++.h>
using namespace std;

int allocateBooks(vector<int> arr, int n, int m)
{
    if(n<m){return -1;}
    int i=0,j=0,mid,an;
    for(auto it:arr){j+=it;}

    while(i<=j)
    {
        mid=i+(j-i)/2;

        int temp=0,s=m,b=n;

        while(s>0)
        {
            if(temp+arr[n-b]>mid)
            {
                temp=0;s--;
            }
            else
            {
                temp+=arr[n-b];
                b--;
                if(b==0)
                {
                    break;
                }
            }

        }

        if(b==0)
        {
            if(b==0&&mid>0){an=mid;}
            j=mid-1;
        }
        else if(b>0)
        {
            i=mid+1;
        }
    }
    return an;
}

int main()
{
    int t;cin>>t;
    vector<int> ans;
    while(t-->0)
    {
        int n,m;cin>>n>>m;
        vector<int> arr;
        for(int i=0;i<n;i++){int x;cin>>x;arr.push_back(x);}

        int y=allocateBooks(arr,n,m);
        ans.push_back(y);
    }
    for(auto it:ans)
    {
        cout<<endl<<it;
    }
    return 0;
}
