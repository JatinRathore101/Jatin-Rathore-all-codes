#include<bits/stdc++.h>
using namespace std;

/*
lower_bound()  and upper_bound() functions:-
Both work on sorted series like sorted array[], or sorted
vector<> etc.

lower_bound() returns the iterator of the element
if found(if duplicate then left most among them). If the element
is not found then it returns the element bigger the input
element, but if nbo such element is present then it returns the
(.end()) iterator.

upper_bound() returns always the bigger element even if the
input element is present in sorted array or it will return
(.end()) iterator.
*/

int main()
{
    int n;cin>>n;
    int a[n];vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);
    cout<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"  ";
        v[i]=a[i];
    }

    cout<<"\n\nenter element for finding lower_bound using pointer on array\n";
    int b;cin>>b;
    int *ptr=lower_bound(a,a+n,b);
    if(ptr==(a+n))
    {
        cout<<"\nnot found";
    }
    else
    {
        cout<<*ptr<<endl;
    }

    cout<<endl<<endl<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"  ";
    }
    cout<<endl<<endl;
    int c;
    cout<<"enter element for finding upper_bound using iterator on vector\n";
    cin>>c;
    auto itr=upper_bound(v.begin(),v.end(),c);
    if(itr!=v.end())
    {
        cout<<*itr<<endl;
    }
    else
    {
        cout<<"not found\n";
    }

    return 0;
}

