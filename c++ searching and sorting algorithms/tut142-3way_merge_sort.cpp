#include<bits/stdc++.h>
using namespace std;

/*
3-WAY MERGE SORT
This variant of merge sort splits the array into 3 parts instead of splitting the
array into 2 parts.
Merge sort recursively breaks down the arrays to subarrays of size half. Similarly,
3-way Merge sort breaks down the arrays to subarrays of size one third.
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

void merge(vector<pair<int,int>> &a,int left,int mid1,int mid2,int right)
{
    int i=left,j=mid1+1,k=mid2+1;
    vector<pair<int,int>>b;
    while(true)
    {
        if((i<=mid1)&&(j<=mid2)&&(k<=right))
        {
            if((a[i].first<=a[j].first)&&(a[i].first<=a[k].first))
            {
                b.push_back(a[i]);
                i++;
            }
            else if((a[j].first<=a[i].first)&&(a[j].first<=a[k].first))
            {
                b.push_back(a[j]);
                j++;
            }
            else
            {
                b.push_back(a[k]);
                k++;
            }
        }
        else if((i<=mid1)&&(j<=mid2))
        {
            if(a[i].first<=a[j].first)
            {
                b.push_back(a[i]);
                i++;
            }
            else
            {
                b.push_back(a[j]);
                j++;
            }
        }
        else if((j<=mid2)&&(k<=right))
        {
            if(a[k].first<=a[j].first)
            {
                b.push_back(a[k]);
                k++;
            }
            else
            {
                b.push_back(a[j]);
                j++;
            }
        }
        else if((i<=mid1)&&(k<=right))
        {
            if(a[i].first<=a[k].first)
            {
                b.push_back(a[i]);
                i++;
            }
            else
            {
                b.push_back(a[k]);
                k++;
            }
        }
        else if(i<=mid1)
        {
            b.push_back(a[i]);
            i++;
        }
        else if(j<=mid2)
        {
            b.push_back(a[j]);
            j++;
        }
        else if(k<=right)
        {
            b.push_back(a[k]);
            k++;
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
    int mid1=left+(right-left)/3;
    int mid2=mid1+(right-left)/3;
    mergesort(a,left,mid1);
    mergesort(a,mid1+1,mid2);
    mergesort(a,mid2+1,right);
    merge(a,left,mid1,mid2,right);
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
    mergesort(a,0,a.size()-1);
    disp(a);
    return 0;
}

/*
Time Complexity: In case of 2-way Merge sort we get the equation: T(n) = 2T(n/2) + O(n)
Similarly, in case of 3-way Merge sort we get the equation: T(n) = 3T(n/3) + O(n)
By solving it using Master method, we get its complexity as O(n log 3n).

Although time complexity looks less compared to 2 way merge sort, the time taken
actually may become higher because number of comparisons in merge function go higher,
similar concept like why is Binary Search preferred over Ternary Search.
*/

