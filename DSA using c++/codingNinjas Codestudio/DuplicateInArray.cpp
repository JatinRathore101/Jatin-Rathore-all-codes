#include<bits/stdc++.h>
using namespace std;

//readquestion online

int findDuplicate(vector<int> &arr)
{
    int x=0;
    for(int i=1;i<arr.size();i++)
    {
        x=x+arr[i]-i;
    }

    return x+arr[0];
}

/* // Alternate solution using XOR

int findDuplicate(vector<int> &arr)
{
    // XOR
    int x=0;
    for(int i=0;i<arr.size();i++)
    {
        x=x^arr[i]^i; // i=0 doesn't matters
    }

    return x;
}



*/

int main()
{
    return 0;
}
