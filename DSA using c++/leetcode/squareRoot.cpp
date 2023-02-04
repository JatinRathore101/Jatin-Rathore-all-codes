#include<bits/stdc++.h>
using namespace std;

int SQRT(long long int N,long long int left,long long int right)
{
    long long int mid=left+(right-left)/2;
    if((mid*mid<=N)&&(N/(mid+1)<mid+1)){return mid;}
    else if(mid*mid>N)
    {
        right=mid-1;
    }
    else
    {
        left=mid+1;
    }
    return SQRT(N,left,right);
}

int mySqrt(int x)
{
    long long int left=0,right=x;
    return SQRT(x,left,right);
}

int main()
{
    long long int N;cin>>N;
    cout<<"sqrt("<<N<<") = "<<sqrtN(N);
    return 0;
}

