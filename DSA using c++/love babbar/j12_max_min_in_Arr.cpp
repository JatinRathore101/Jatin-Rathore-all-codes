#include<bits/stdc++.h>
using namespace std;
// To find Max and Min element of an integer array.
int main()
{
    int a[20];
    for(int i=0;i<20;i++)
    {a[i]=rand()%1000+rand()%991+rand()%1;cout<<a[i]<<endl;}
    int Max=INT_MIN;
    int Min=INT_MAX;

    for(int i=0;i<20;i++)
    {
        cout<<a[i]<<endl;
        if(Max<a[i]){Max=a[i];}
        if(Min>a[i]){Min=a[i];}
    }

    cout<<endl<<"Min = "<<Min;
    cout<<endl<<"Max = "<<Max;

    return 0;
}

// Iterator loop was giving some error with arrays.

