#include<bits/stdc++.h>
using namespace std;

/*
some utility functions:-
min_element() , max_element() , accumulate() ,
count() , find() , reverse()
*/

int main()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        v[i]=(rand()%473)%10;
    }cout<<endl<<endl;
    int min=*min_element(v.begin(),v.end());
    cout<<"min = "<<min<<endl;

    int max=*max_element(v.begin()+3,v.end());
    cout<<"max = "<<max<<endl;

    int sum=accumulate(v.begin(),v.end(),3); //3 is default add to the total sum
    cout<<"sum = "<<sum<<endl;

    int ct=count(v.begin()+1,v.end(),7);
    cout<<"count of 7 = "<<ct<<endl;

    auto element=find(v.begin(),v.end(),2);
    if(element!=v.end())
    {
        cout<<*element<<endl;
    }
    else
    {
        cout<<"element not found"<<endl;
    }

    reverse(v.begin()+2,v.end()-3);
    cout<<"\nAfter reverse from i=2 to i=end()-3;\n";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<"  ";
    }

    return 0;
}

