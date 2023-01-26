#include<bits/stdc++.h>
using namespace std;

int main()
{
    int* p=new int;
    *p=10;
    cout<<"p = "<<*p<<endl;
    delete p;

    // creating dynamic array
    int n;cin>>n;
    auto p=new int[n]; // OR => int* p=new int[n];
    for(int i=0;i<n;i++)
    {
        p[i]=rand()%9+1;
    }

    for(int i=0;i<n;i++){cout<<i[p]<<" ";}

    delete []p;

    return 0;
}

