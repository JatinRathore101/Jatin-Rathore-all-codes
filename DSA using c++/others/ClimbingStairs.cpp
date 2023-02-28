#include<bits/stdc++.h>
using namespace std;

/*
int climbStairs(int n) // TLE
{
    if(n==1){return 1;}
    else if(n==2){return 2;}

    return climbStairs(n-1)+climbStairs(n-2);
}
*/

int climbStairs(int n)
{
    if(n<4){return n;}
    vector<int> v(n+1,0);
    v[1]=1;v[2]=2;
    int i=3;
    while(i<=n)
    {
        v[i]=v[i-1]+v[i-2];
        i++;
    }
    return v[n];
}

int main()
{
    int n;cin>>n;
    cout<<climbStairs(n);
    return 0;
}

/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?



Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step



Constraints:

    1 <= n <= 45


*/
