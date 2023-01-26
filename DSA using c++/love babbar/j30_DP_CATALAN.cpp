#include<bits/stdc++.h>
using namespace std;

unsigned long int catalan(unsigned int n)
{
    if(n<=1){return 1;}

    vector<unsigned long int> c(n+1,0);
    c[0]=c[1]=1;

    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            c[i]+=c[j]*c[i-1-j];
        }
    }

    return c[n];
}

int main()
{
    for(int i=0;i<20;i++)
    {
        cout<<"catalan("<<i<<") = "<<catalan(i)<<endl;
    }
    return 0;
}

// direct formula for catalan numbers is  //  catalan(n) = ((2n C n)/(n+1))

