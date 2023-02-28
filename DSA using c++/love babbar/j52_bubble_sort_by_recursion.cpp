#include<bits/stdc++.h>
using namespace std;

void disp(vector<int> &a)
{
    cout<<endl;
    for(auto it:a)
    {cout<<it<<"  ";}
    cout<<endl;
}

void bubble_sort(vector<int> &a,int n)
{
    if(n==1){return;}
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            swap(a[i-1],a[i]);
        }
    }
    bubble_sort(a,n-1);
}

int main()
{
    int n;cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){int x=rand()%90+10;a.push_back(x);}
    disp(a);
    bubble_sort(a,n);
    disp(a);
    return 0;
}

