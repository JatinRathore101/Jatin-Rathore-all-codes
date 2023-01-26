#include<bits/stdc++.h>
using namespace std;

int findLargestMinDistance(vector<int> &boards, int k)
{

    int n=boards.size();
    if(n<k){return -1;}
    int i=0,j=0,mid,an;
    for(auto it:boards){j+=it;}

    while(i<=j)
    {
        mid=i+(j-i)/2;

        int temp=0,p=k,b=n;

        while(p>0)
        {
            if(temp+boards[n-b]>mid)
            {
                temp=0;p--;
            }
            else
            {
                temp+=boards[n-b];
                b--;
                if(b==0)
                {
                    break;
                }
            }

        }

        if(b==0)
        {
            if(b==0&&mid>0){an=mid;}
            j=mid-1;
        }
        else if(b>0)
        {
            i=mid+1;
        }
    }
    return an;
}

int main()
{
    int T;cin>>T;
    vector<int> ans;

    while(T>0)
    {
        int N,K;
        cin>>N>>K;
        vector<int> A;
        for(int i=0;i<N;i++)
        {
            int x;cin>>x;A.push_back(x);
        }

        int y=findLargestMinDistance(A,K);

        ans.push_back(y);
        T--;
    }

    for(auto it:ans){cout<<endl<<it;}

    return 0;
}
