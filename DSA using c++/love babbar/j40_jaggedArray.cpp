#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int* c=new int[n];

    int** a=new int*[n];
    for(int i=0;i<n;i++)
    {
        int m=rand()%9+1;
        c[i]=m;
        a[i]=new int[m];
        for(int j=0;j<m;j++)
        {
            a[i][j]=rand()%9+1;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<c[i];j++)
        {
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
        delete[] a[i];
    }

    delete[] a;
    delete[] c;
    return 0;
}

