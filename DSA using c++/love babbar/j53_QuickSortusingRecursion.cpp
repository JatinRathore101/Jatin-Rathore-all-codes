#include<bits/stdc++.h>
using namespace std;

void disp(vector<int> &a)
{
    cout<<endl;
    for(auto it:a){cout<<it<<"  ";}
    cout<<endl;
}

void quick_sort_recur(vector<int> &a,int left,int right)
{
    if(left>=right){return;}
    int pivot=rand()%(right-left+1)+left;
    swap(a[left],a[pivot]);
    pivot=left;
    for(int i=left+1;i<=right;i++)
    {
        if(a[i]<a[pivot])
        {
            swap(a[i],a[pivot+1]);
            swap(a[pivot],a[pivot+1]);
            pivot++;
        }
    }
    quick_sort_recur(a,left,pivot-1);
    quick_sort_recur(a,pivot+1,right);
}

void quick_sort(vector<int> &a,int n)
{
    int left=0,right=n-1;
    quick_sort_recur(a,left,right);
}

int main()
{
    int n;cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){a.push_back(rand()%90+10);}
    disp(a);quick_sort(a,n);disp(a);
    return 0;
}

