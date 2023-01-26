#include<bits/stdc++.h>
using namespace std;

/*
Recursive Implementation Of Bubble Sort:
The idea is to place the largest element in its position and keep doing
the same for every other element.

Steps to Recursively Implement Bubble Sort:
-Place the largest element at its position, this operation makes sure that
the first largest element will be placed at the end of the array.
-Recursively call for rest n – 1 elements with the same operation and place
the next greater element at their position.
-The base condition for this recursion call would be, when the number of
elements in the array becomes 0 or 1 then, simply return (as they are
already sorted).
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

void recursive_bubble_sort(vector<pair<int,int>> &a,int n)
{
    if((n==1)||(n==0))
    {
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i].first>a[i+1].first){swap(a[i],a[i+1]);}
    }
    recursive_bubble_sort(a,n-1);
}

int main()
{
    int n,x;cin>>n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++)
    {
        x=rand()%18-9;
        //cin>>x;
        a.push_back({x,i});
    }
    disp(a);
    recursive_bubble_sort(a,a.size()-1);
    disp(a);
    return 0;
}

/*
Time Complexity: O(n^2)
Auxiliary Space: O(n)
*/

