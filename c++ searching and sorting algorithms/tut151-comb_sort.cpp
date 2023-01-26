#include<bits/stdc++.h>
using namespace std;

/*
COMB SORT
Comb Sort is mainly an improvement over Bubble Sort, just like
shell sort is an improvement over insertion sort.

Bubble sort always compares adjacent values. So all inversions
are removed one by one. Comb Sort improves on Bubble Sort by
using a gap of the size of more than 1. The gap starts with a
large value and shrinks by a factor of 1.3 in every iteration
until it reaches the value 1. Thus Comb Sort removes more than
one inversion count with one swap and performs better than Bubble
Sort.
The shrink factor has been empirically found to be 1.3 (by testing
Combsort on over 200,000 random lists) ( gap[i] = gap[i-1]/1.3 )
Although it works better than Bubble Sort on average, worst-case
remains O(n^2).
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

void comb_sort(vector<int>&a)
{
    int gap=a.size(),n=a.size();
    bool swapped=true;
    while((swapped==true)||(gap!=1))
    {
        gap/=1.3;
        if(gap<1)
        {
            gap=1;
        }
        swapped=false;
        for(int i=0;i<n-gap;i++)
        {
            if(a[i]>a[i+gap])
            {
                swap(a[i],a[i+gap]);
                swapped=true;
            }
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
    comb_sort(a);
    disp(a);
    return 0;
}

/*
Time Complexity: Average case time complexity of the algorithm is
O(N^2/2^p), where p is the number of increments. The worst-case
complexity of this algorithm is O(n^2) and the Best Case complexity
is O(n*log(n)).
Auxiliary Space : O(1).
*/
