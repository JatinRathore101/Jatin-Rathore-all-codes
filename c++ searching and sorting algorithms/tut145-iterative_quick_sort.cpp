#include<bits/stdc++.h>
using namespace std;

/*
ITERATIVE QUICK SORT
Normal recursive implementation of quick sort can be easily converted to an
iterative version with the help of an auxiliary stack. Following is an
iterative implementation of the above recursive code.
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

int partition(vector<int>&a,int left,int right)
{
    int pivot=left+rand()%(right-left+1);
    swap(a[left],a[pivot]);
    int j=left;
    for(int i=left+1;i<=right;i++)
    {
        if(a[i]<a[j])
        {
            swap(a[i],a[j+1]);
            swap(a[j],a[j+1]);
            j++;
        }
    }
    return j;
}

void iterative_quick_sort(vector<int>&a)
{
    stack<int> s;
    s.push(0);s.push(a.size()-1);
    while(!s.empty())
    {
        int right=s.top();s.pop();
        int left=s.top();s.pop();
        int mid=partition(a,left,right);
        if(mid>left+1)
        {
            s.push(left);
            s.push(mid-1);
        }
        if(mid<right-1)
        {
            s.push(mid+1);
            s.push(right);
        }
    }
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
    iterative_quick_sort(a);
    disp(a);
    return 0;
}

/*
Time Complexity: O(n*log(n))
Auxiliary Space: O(n)

Further optimizations for iterative quicksort can be achieved by-
-choosing the optimal pivot.
-Use insertion sort when the size reduces below an experimentally calculated threshold.
*/
