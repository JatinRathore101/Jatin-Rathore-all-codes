#include<bits/stdc++.h>
using namespace std;

int myIntSqrt(int x)
{
    long long i=0,j=x,mid;
    while(true)
    {
        mid=i+(j-i)/2;
        if(mid*mid<=x&&(mid+1)*(mid+1)>x){break;}
        else if(mid*mid>x){j=mid-1;}
        else{i=mid+1;}
    }
    return mid;
}

double SQRT(int p,int a,int x)
{
    double f=1,b=a;
    vector<double> F(p);
    for(int i=0;i<p;i++){f/=10;F[i]=f;}

    for(auto it:F)
    {
        for(int i=1;i<10;i++)
        {
            double A=it*i;
            if((b+A)*(b+A)>x){break;}
            b+=A;
        }
    }
    return b;
}

int main()
{
    int x,p;
    p=5;
    cin>>x>>p; // p precision needed // number of digits in sqrt after decimal
    int a=myIntSqrt(x);
    double b=SQRT(p,a,x);
    cout<<endl<<sqrt(x)<<"   "<<b<<endl;
    return 0;

}

