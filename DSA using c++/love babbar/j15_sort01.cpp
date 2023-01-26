#include<bits/stdc++.h>
using namespace std;

//two pointer approach

void sort01(vector<int> &a, int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        if(a[i]==0){i++;}
        if(a[j]==1){j--;}
        if(a[i]==1&&a[j]==0&&i<j){a[i]=0;a[j]=1;i++;j--;}
    }
}

void disp(vector<int> &a)
{
    for(auto it:a)
    {
        cout<<it<<"  ";
    }
}

int main()
{
    int n;cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        a.push_back(x);
    }
    disp(a);
    sort01(a,n);
    cout<<endl<<endl;
    disp(a);
    return 0;
}
