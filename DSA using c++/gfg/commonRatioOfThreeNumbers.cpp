#include<bits/stdc++.h>
using namespace std;

int GCD(int x,int y)
{
    int t=max(x,y);
    y=x+y-t;x=t;

    while(y>0)
    {
        t=x%y;
        x=y;
        y=t;
    }
    return x;
}

int main()
{
    int a,b1,b2,c;
    cin>>a>>b1>>b2>>c;
    //  a:b1 = a*b2:b1*b2  //  b2:c = b1*b2:b1*c  // => a:b:c  => a*b2 : b1*b2 : b1*c
    int b=b1*b2;a=a*b2;c=b1*c;

    // now a,b,c already have a common ratio ( a -> a*b2 ) ( b1 -> b1*b2 ) ( b2 -> b1*b2 ) ( c -> b1*c )
    // we just need to bring this ratio in simplest form // devide by GCD of a,b,c

    // GCD(a,b,c)=GCD(a,GCD(b,c))

    int g=GCD(a,GCD(b,c));

    a/=g;b/=g;c/=g;cout<<endl<<"a:b:c = "<<a<<":"<<b<<":"<<c<<endl;

    return 0;
}

