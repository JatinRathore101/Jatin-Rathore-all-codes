#include<bits/stdc++.h>
using namespace std;

// STABLE SELECTION SORT

void disp(vector<pair<int,int>> &v)
{
    cout<<endl;
    for(auto it:v)
    {
        cout<<endl<<it.first<<"  "<<it.second;
    }
    cout<<endl;
}

void normal_selection_sort(vector<pair<int,int>> &v) //not stable
{
    int index;
    for(int i=0;i<v.size()-1;i++)
    {
        index=i;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j].first<v[index].first) // use condition v[j]>v[index] to sort in descending order
            {
                index=j;
            }
        }
        swap(v[i],v[index]);
    }
}

void stable_selection_sort(vector<pair<int,int>> &v)
{
    int index;pair<int,int>key;
    for(int i=0;i<v.size()-1;i++)
    {
        index=i;
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j].first<v[index].first) // use condition v[j]>v[index] to sort in descending order
            {
                index=j;
            }
        }
        key=v[index];
        while(index>i)
        {
            v[index]=v[index-1];
            index--;
        }
        v[i]=key;
    }
}

int main()
{
    int n,x;cin>>n;
    vector<pair<int,int>> a,b,c;
    for(int i=0;i<n;i++)
    {
        x=rand()%18-9;
        //cin>>x;
        a.push_back({x,i});
    }
    b=a;c=a;

    cout<<endl<<"displaying unsorted list";
    disp(a);
    cout<<endl<<"list after normal non stable selection sort";
    normal_selection_sort(a);
    disp(a);

    cout<<endl<<"displaying unsorted list";
    disp(b);
    cout<<endl<<"list after stable selection sort";
    stable_selection_sort(b);
    disp(b);

    cout<<endl<<"displaying unsorted list";
    disp(c);
    cout<<endl<<"list after STL sort()";
    stable_sort(c.begin(),c.end());
    disp(c);

    cout<<endl<<"stable_sort is STL's inbuild stable sorting function with very fast speed\n";

    return 0;
}
