#include<bits/stdc++.h>
using namespace std;

void disp(vector<string> &sq)
{
    cout<<endl;
    for(auto it:sq){cout<<it<<endl;}
    cout<<endl;
}

void pushRecur(vector<string> &sq,string s,int i,string str)
{
    if(i>=str.size()){if(s.size()>0){sq.push_back(s);}return;}

    pushRecur(sq,s,i+1,str);

    s.push_back(str[i]);
    pushRecur(sq,s,i+1,str);
}

vector<string> subsequences(string str)
{
    vector<string> sq;
    string s;
    pushRecur(sq,s,0,str);
    return sq;
}

int main()
{
    string str="abc";
    vector<string> sq=subsequences(str);
    disp(sq);
    return 0;
}

