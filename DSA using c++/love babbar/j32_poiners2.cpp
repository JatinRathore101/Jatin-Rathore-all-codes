#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5]={2,4,6,8,10};

    cout<<"a = "<<a<<endl;
    cout<<"&a = "<<&a<<endl;
    cout<<"&a[0] = "<<&a[0]<<endl;
    cout<<"                =>   a = &a = &a[0]"<<endl<<endl;

    cout<<"a[2] = "<<a[2]<<endl;
    cout<<"2[a] = "<<2[a]<<endl;
    cout<<"*(a+2) = "<<*(a+2)<<endl;
    cout<<"                =>   a[i] = i[a] = *(a+i)"<<endl<<endl;

    cout<<"*(a+2) != *a+2 = "<<*a+2<<endl<<endl;
    cout<<"a[0] = *(a+0) = *a = "<<*a<<endl<<endl;


    int* b=a;
    cout<<"*a[3] = "<<a[3]<<endl;
    cout<<"b[3] = "<<b[3]<<endl;
    cout<<"*(a+3) = "<<*(a+3)<<endl;
    cout<<"*(b+3) = "<<*(b+3)<<endl<<endl;

    int* g=&a[0];
    cout<<"*a[3] = "<<a[3]<<endl;
    cout<<"g[3] = "<<g[3]<<endl;
    cout<<"*(a+3) = "<<*(a+3)<<endl;
    cout<<"*(g+3) = "<<*(g+3)<<endl<<endl;

    //int* h=&a; // however this syntax is invalid
    //cout<<"*a[3] = "<<a[3]<<endl;
    //cout<<"h[3] = "<<h[3]<<endl;
    //cout<<"*(a+3) = "<<*(a+3)<<endl;
    //cout<<"*(h+3) = "<<*(h+3)<<endl<<endl;

    // size of every kind of pointer irrespective to the size and type of data it points is always 8 bytes //

    return 0;
}

