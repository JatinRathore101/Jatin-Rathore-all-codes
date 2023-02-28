#include<bits/stdc++.h>
using namespace std;

int nthUglyNumber(int n)
{
    vector<int> v;
    if(n<=2){return n;}
    v.push_back(1);v.push_back(2);
    int i=0,j=0,k=0,w=1;
    while(n>w+1)
    {
        w++;
        while(v[i]<=v[w-1]/5&&i<w-1){i++;}
        while(v[j]<=v[w-1]/3&&j<w-1){j++;}
        while(v[k]<=v[w-1]/2&&k<w-1){k++;}
        //cout<<"w = "<<w<<"     v[i] = "<<v[i]<<"     v[j] = "<<v[j]<<"     v[k] = "<<v[k]<<endl;

        vector<int> ch;
        v.push_back(min(v[i]*5,min(v[j]*3,v[k]*2)));
        if(v[i]*3>v[w-1]){v[w]=min(v[w],v[i]*3);}
        if(v[i]*2>v[w-1]){v[w]=min(v[w],v[i]*2);}
        if(v[j]*2>v[w-1]){v[w]=min(v[w],v[j]*2);}


    }
    return v[w];
}

int main()
{
    int n;cin>>n;//1 <= n <= 1690
    cout<<"\nnth ugly number for (n = "<<n<<") = "<<nthUglyNumber(n);
    return 0;
}

/*
An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return the nth ugly number.



Example 1:

Input: n = 10
Output: 12
Explanation: [1, 2, 3, 4, 5, 6, 8, 9, 10, 12] is the sequence of the first 10 ugly numbers.

Example 2:

Input: n = 1
Output: 1
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.



Constraints:

    1 <= n <= 1690


*/
