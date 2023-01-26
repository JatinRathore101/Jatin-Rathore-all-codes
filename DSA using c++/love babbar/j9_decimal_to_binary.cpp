#include<bits/stdc++.h>
using namespace std;

/*
Decimal to binary

steps:
1-store remainder of the number when devided by 2 and keep deviding by 2
2-reverse the array of remainder formed
*/

int main()
{
    int n,m;cin>>n;// generic n can be negative also
    vector<int> a(32);

    m=n;
    if(n<0){m*=-1;}

    int i=0,bit;
    while(i<32)
    {
        bit=m&1;
        if(m==0)
        {
            a[31-i]=0;
        }
        else
        {
            a[31-i]=bit;
        }
        m=m>>1;
        i++;
    }

    if(n<0)// finding two's complement of binary digit
    {
        for(int i=0;i<32;i++) // ones complement
        {
            if(a[i]==0){a[i]=1;}
            else{a[i]=0;}
        }
        for(int i=31;i>=0;i--)// twos complement = ones complement +1
        {
            if(a[i]==0){a[i]=1;break;}
            a[i]=0;
        }
    }

    for(auto it:a)
    {
        cout<<it;
    }
}


/*
int main()
{
    int decimal;cin>>decimal;// input decimal should be non negative
    long long binari=0,power=1;
    int i=0,bit;
    while(decimal!=0)
    {
        bit=decimal&1;
        binari+=bit*power;
        decimal=decimal>>1;
        power*=10;
    }
    cout<<binari;
}
*/


















/*
vector<int> positive_dec_to_bin_reverse(int m)
{
    vector<int> a;
    while(m!=0)
    {
        a.push_back(m%2);
        m/=2;
    }
    return a;
}

int main()
{
    int n;cin>>n;//considering n>=0 only;
    long long binari;
    binari=0;
    vector<int> a=positive_dec_to_bin_reverse(n);
    long long power=1;
    for(int i=0;i<a.size();i++)
    {
        binari+=a[i]*power;
        power*=10;
    }

    cout<<binari;
    return 0;
}
*/
