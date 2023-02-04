#include<bits/stdc++.h>
using namespace std;

/*
to check if entered number is a power of 2
completed by recursion
*/


    bool ISPOWEROF2(int n,int left,int right)
    {
        int mid=(left+right)/2;
        if (n==pow(2,mid)){return true;}
        else if(n>pow(2,mid))
        {
            if(mid<right){return ISPOWEROF2(n,mid+1,right);}
            else{return false;}
        }
        else if(n<pow(2,mid))
        {
            if(mid>left){return ISPOWEROF2(n,left,mid-1);}
            else{return false;}
        }

    }

    bool isPowerOfTwo(int n)
    {
        if(n<0){return false;}
        int left=0;
        int right=31;
        return ISPOWEROF2(n,left,right);
    }


int main()
{
    int n;cin>>n;
    cout<<::boolalpha1<<isPowerOfTwo(n);
    return 0;
}

