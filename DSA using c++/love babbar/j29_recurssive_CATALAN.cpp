#include<bits/stdc++.h>
using namespace std;


// A recursive function to find nth catalan number
unsigned long int catalan(unsigned int n)
{
    if(n<=1){return 1;} // base case

    // catalan(n) is sum of catalan(i)*catalan(n-i-1)
    unsigned long int a=0;
    for(int i=0;i<n;i++){a+=catalan(i)*catalan(n-1-i);}

    return a;
}

int main()
{
    for(int i=0;i<20;i++)
    {
        cout<<"catalan("<<i<<") = "<<catalan(i)<<endl;
    }
    return 0;
}
