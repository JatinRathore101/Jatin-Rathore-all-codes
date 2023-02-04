#include<bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2)
{
    if(s1.size()>s2.size()){return false;}

    vector<int> c1(26);
    for(auto it:s1){c1[it-97]++;}
    //for(auto it:s2){c2[it-97]++;}
    //for(int i=0;i<26;i++){if(c2[i]-c1[i]<0){return false;}}

    int i=0,j=s1.size()-1;
    bool flag;
    while(j<s2.size())
    {
        vector<int> c2(c1);
        flag=true;
        for(int k=i;k<=j;k++)
        {
            c2[s2[k]-97]--;
            if(c2[s2[k]-97]<0){flag=false;break;}
        }
        if(flag==true){break;}
        i++;j++;

    }
    return flag;
}

int main()
{
    string s1="ab",s2="ibasdjdh";
    cout<<checkInclusion(s1,s2);
    return 0;
}

