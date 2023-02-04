#include<bits/stdc++.h>
using namespace std;

int main()
{
    // enter any number
    string x; cin>>x;
    unordered_map<int,string> m;
    m[0]="zero";m[1]="one";m[2]="two";m[3]="three";m[4]="four";
    m[5]="five";m[6]="six";m[7]="seven";m[8]="eight";m[9]="nine";

    for(int i=0;i<x.size();i++)
    {
        cout<<m[x[i]-48]<<"  ";
        //cout<<x[i]-48<<"  ";
    }

    return 0;
}

