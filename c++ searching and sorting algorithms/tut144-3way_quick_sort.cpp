#include<bits/stdc++.h>
using namespace std;

/*
3-WAY QUICK SORT
*/

void disp(vector<int>&a)
{
    cout<<endl;
    for(auto it:a)
    {
        cout<<it<<"  ";
    }
    cout<<endl;
}

vector<int> Partition3(vector<int>&a,int left,int mid,int right)
{
    swap(a[left],a[mid]);
    vector<int> ret;
    int j=left;

    for(int i=left+1;i<=right;i++)
    {
        if(a[i]<a[j])
        {
            swap(a[i],a[j+1]);
            swap(a[j],a[j+1]);
            j++;
        }
    }ret.push_back(j-1);
    for(int i=j+1;i<=right;i++)
    {
        if(a[i]==a[j])
        {
            j++;
            swap(a[i],a[j]);
        }
    }
    ret.push_back(j+1);
    return ret;
}

void quick_sort(vector<int>&a,int left,int right)
{
    if(left>=right)
    {
        return;
    }
    int pivot=left+rand()%(right-left+1);
    vector<int> mid=Partition3(a,left,pivot,right);
    quick_sort(a,left,mid[0]);
    quick_sort(a,mid[1],right);
}

int main()
{
    int n,x;cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        x=rand()%19-9;
        //cin>>x;
        a.push_back(x);
    }
    disp(a);
    quick_sort(a,0,a.size()-1);
    disp(a);
    return 0;
}
