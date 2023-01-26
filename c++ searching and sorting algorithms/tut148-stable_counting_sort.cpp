#include<bits/stdc++.h>
using namespace std;

// STABLE COUNTING SORT

void disp(vector<pair<int,int>>&a)
{
    cout<<endl;
    for(auto it:a)
    {
        cout<<it.first<<"  "<<it.second<<endl;
    }
    cout<<endl;
}

void counting_sort(vector<pair<int,int>>&a)
{
    pair<int,int> low=*min_element(a.begin(), a.end());
    pair<int,int> high=*max_element(a.begin(), a.end());
    vector<pair<int,int>> c(a.size());
    vector<int> b(high.first-low.first+1);
    int i;
    for(i=0;i<a.size();i++)
    {
        b[a[i].first-low.first]++;
    }
    for(i=1;i<b.size();i++)
    {
        b[i]+=b[i-1];
    }
    for (i = a.size()-1; i>=0; i--) // just by reversing this loop from end to begin the algorithm became stable
    {
        c[b[a[i].first-low.first]-1] = a[i];
        b[a[i].first-low.first]--;
    }
    for(i=0;i<a.size();i++)
    {
        a[i]=c[i];
    }

}

int main()
{
    int n,x;
    cin>>n;
    vector<pair<int,int>> a;
    for(int i=0;i<n;i++)
    {
        x=rand()%n-rand()%(i+1);
        if((i%7==2)||(i%3==0))x*=-1;
        //cin>>x;
        a.push_back({x,i});
    }
    disp(a);
    counting_sort(a);
    disp(a);
    return 0;
}











/*

#include<bits/stdc++.h>
using namespace std;

void disp(vector<int>&a)
{
    cout<<endl;
    for(auto it:a)
    {
        cout<<it<<"  ";
    }
    cout<<endl;
}

void counting_sort(vector<int>&a)
{
    int low=*min_element(a.begin(), a.end());
    int high=*max_element(a.begin(), a.end());
    vector<int> b(high-low+1),c(a.size());
    int i;
    for(i=0;i<a.size();i++)
    {
        b[a[i]-low]++;
    }
    for(i=1;i<b.size();i++)
    {
        b[i]+=b[i-1];
    }
    for (i = a.size()-1; i>=0; i--)
    {
        c[b[a[i]-low]-1] = a[i];
        b[a[i]-low]--;
    }
    for(i=0;i<a.size();i++)
    {
        a[i]=c[i];
    }

}

int main()
{
    int n,x;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        x=rand()%n-rand()%(i+1);
        if((i%7==2)||(i%3==0))x*=-1;
        //cin>>x;
        a.push_back(x);
    }
    disp(a);
    counting_sort(a);
    disp(a);
    return 0;
}
*/
