#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;

    auto a=new int*[n]; // here => auto = int** //
    for(int i=0;i<n;i++)
    {
        a[i]=new int[m];
        for(int j=0;j<m;j++)
        {
            a[i][j]=rand()%9+1;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
        delete []a[i];
    }

    delete[] a;

    return 0;
}

