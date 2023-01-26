#include<bits/stdc++.h>
using namespace std;


/*
binary search algorithm that allows searching
very efficiently (even huge) lists, provided that the list is sorted.
=> It returns the index wrto sorted list.
to perfor it on unsorted list you will need to multimap the indeces of elements then apply binary search.
*/

int binary_search(vector<pair<long long,long long>> &a, int x)
{
    int left = 0, right = a.size()-1,mid;
    while(true)
    {
        mid=(left+right)/2;
        if(a[mid].first==x)
        {
            return a[mid].second;
        }
        else if(a[mid].first<x)
        {
            if(mid==right)
            {
                break;
            }
            left=mid+1;
        }
        else
        {
            if(mid==left)
            {
                break;
            }
            right=mid-1;
        }
    }
    return -1;
}

void disp_list(vector<pair<long long,long long>> &a)
{
    cout<<endl;
    for(auto it:a)
    {
        cout<<it.first<<"  ";
    }
    cout<<endl;
}

int main()
{
    long long n,x;
    cin>>n;cout<<endl;
    vector<pair<long long,long long>> a;
    for (size_t i = 0; i < n; i++)
    {
        cin>>x;
        a.push_back({x,i});
    }
    disp_list(a);
    cout<<endl;
    sort(a.begin(),a.end());
    // by default STL sort is in ascending order
    // by default the first element of pairs is compared
    int b;
    std::cin >> b;
    std::cout <<endl <<binary_search(a, b) <<' ';

    return 0;
}
