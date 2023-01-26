#include<bits/stdc++.h>
using namespace std;

/*
EFFICIENT MERGE SORT
Merge sort can be made more efficient by replacing recursive calls with
Insertion sort for smaller array sizes, where the size of the remaining array
is less or equal to 43 as the number of operations required to sort an array
of max size 43 will be less in Insertion sort as compared to the number of
operations required in Merge sort.
*/

void disp(vector<pair<int,int>> &a)
{
    cout<<endl;
    for(auto it:a)
    {
        cout<<it.first<<"  "<<it.second<<"\n";
    }
    cout<<endl;
}

void insertion(vector<pair<int,int>> &a,int left,int right)
{
    pair<int,int> temp;
    int key,index;
    for(int i=left+1;i<=right;i++)
    {
        temp=a[i];
        key=a[i].first;
        int j,index=i;
        for(j=i-1;j>=left;j--)
        {
            if(a[j].first>key)
            {
                a[j+1]=a[j];
                index--;
            }
            else
            {
                break;
            }
        }
        a[index]=temp;
    }
}

void merge(vector<pair<int,int>> &a,int left,int mid,int right)
{
    int i=left,j=mid+1;
    vector<pair<int,int>>b;
    while(true)
    {
        if((i<=mid)&&(j<=right))
        {
            if(a[i].first>a[j].first)
            {
                b.push_back(a[j]);
                j++;
            }
            else
            {
                b.push_back(a[i]);
                i++;
            }
        }
        else if(i<=mid)
        {
            b.push_back(a[i]);
            i++;
        }
        else if(j<=right)
        {
            b.push_back(a[j]);
            j++;
        }
        else
        {
            break;
        }
    }

    for(i=left;i<=right;i++)
    {
        a[i]=b[i-left];
    }

}

void mergesort(vector<pair<int,int>> &a,int left,int right)
{
    if(right<=left){return;}
    int mid=(left+right)/2;
    if(mid-left<=42)
    {
        insertion(a,left,mid);
    }
    else
    {
        mergesort(a,left,mid);
    }
    if(right-mid<=43)
    {
        insertion(a,mid+1,right);
    }
    else
    {
        mergesort(a,mid+1,right);
    }
    merge(a,left,mid,right);
}

int main()
{
    int n,x;cin>>n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++)
    {
        x=rand()%19-9;
        //cin>>x;
        a.push_back({x,i});
    }
    disp(a);
    if(a.size()<=43)
    {
        insertion(a,0,a.size()-1);
    }
    else
    {
        mergesort(a,0,a.size()-1);
    }
    disp(a);
    return 0;
}
