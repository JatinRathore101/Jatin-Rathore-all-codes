#include<bits/stdc++.h>
using namespace std;

void print(int a[],int n)
{
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}

int main()
{
    int a[20];
    for(int i=0;i<20;i++)
    {
        a[i]=rand()%971+rand()%676+rand()%132;
    }
    print(a,20);

    for(int i=0;i<10;i++)
    {
        int x=a[i];
        a[i]=a[19-i];
        a[19-i]=x;
    }
    cout<<endl<<endl;
    print(a,20);

    cout<<endl;
    return 0;
}

