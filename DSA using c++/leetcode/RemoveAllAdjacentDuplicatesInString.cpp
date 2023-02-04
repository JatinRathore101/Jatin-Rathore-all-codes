#include<bits/stdc++.h>
using namespace std;

/*
string removeDuplicates(string s)
{
    int flag=0;
    while(flag==0)
    {
        flag=1;
        auto it1=s.begin();
        auto it2=s.begin();++it2;
        while(it2!=s.end())
        {
            if(it1==s.end()){break;}

            if(*it1==*it2)
            {
                flag=0;
                ++it2;
                s.erase(it1,it2);
                --it2;
            }
            else
            {
                ++it1;++it2;
            }
        }
    }
    return s;
}
*/


string removeDuplicates(string s)
{
    int flag=0;
    while(flag==0&&s.size()>1)
    {
        flag=1;
        int i=0;
        while(i<s.size())
        {
            if(s[i]==s[i+1])
            {
                flag=0;
                s.erase(i,2);
                //s.erase(i,3); // test these and see the
                //s.erase(i,3); // functioning of erase()
                //s.erase(i,5); // function over index and length

                i--;
            }
            else
            {
                i++;
            }
        }
    }
    return s;
}


int main()
{
    string t=removeDuplicates("aabbbaaaaaca");
    for(auto it:t){cout<<it;}
    return 0;
}

