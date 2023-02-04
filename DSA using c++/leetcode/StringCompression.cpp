#include<bits/stdc++.h>
using namespace std;

/*int compress(vector<char>& chars)
{
    int j=0,k=0,n=chars.size();

    while(j<n)
    {
        char ch=chars[j];

        int x=1;
        while(chars[j+1]==chars[j]){j++;x++;}
        chars[k++]=ch;

        if(x>1)
        {
            string s=to_string(x);
            for(auto it:s)
            {
                chars[k++]=it;
            }
        }
        j++;
    }
    chars.erase(chars.begin()+k,chars.end());
    return k;
}*/

/*
int compress(vector<char>& chars)
{
    int i=0,j=0,n=chars.size();
    chars.push_back(chars[n-1]+1);
    vector<char> chars2;
    while(j<n)
    {
        j++;
        if(chars[j]!=chars[i])
        {
            chars2.push_back(chars[i]);
            int x=j-i;
            //cout<<chars[i]<<x;

            if(x>1)
            {
                vector<char> digits;
                while(x)
                {
                    char y=48+x%10;
                    digits.push_back(y);
                    x/=10;
                }
                for(int i=digits.size()-1;i>=0;i--)
                {
                    chars2.push_back(digits[i]);
                }
            }
            i=j;
        }

    }
    chars=chars2;
    return chars2.size();
}
*/


int compress(vector<char>& chars)
{
    int i=0,k=0,n=chars.size();

    while(i<n)
    {
        int j=i+1;
        while(j<n&&chars[i]==chars[j]){j++;}
        chars[k++]=chars[i];
        int x=j-i;

        if(x>1)
        {
            string s=to_string(x);
            for(auto it:s)
            {
                chars[k++]=it;
            }
        }
        i=j;
    }
    chars.erase(chars.begin()+k,chars.end());
    return k;
}

int main()
{
    vector<char> chars={'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    int y=compress(chars);
    cout<<endl<<y<<endl;
    for(int i=0;i<chars.size();i++)
    {
        cout<<chars[i];
    }
    return 0;
}

