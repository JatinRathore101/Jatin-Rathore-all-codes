#include<bits/stdc++.h>
using namespace std;

int ac(vector<int> &s,int k,int left,int right)
{
    int K=k;
    if(right<left){return -1;}
    int mid=left+(right-left)/2,temp=0;

    for(auto it:s)
    {
        temp+=it;
        if(temp>=mid)
        {
            temp=0;K--;
            if(K==0)
            {return max(mid,ac(s,k,mid+1,right));}
        }
    }

    return ac(s,k,left,mid-1);
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int left=0,right=stalls[stalls.size()-1]-stalls[0];
    vector<int> s;k--;
    for(int i=1;i<stalls.size();i++){s.push_back(stalls[i]-stalls[i-1]);}
    return ac(s,k,left,right);
}

int main()
{
    vector<int> stalls;
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){int x;cin>>x;stalls.push_back(x);}
    cout<<endl<<aggressiveCows(stalls,k);
    return 0;
}


/*

int aggressiveCows2(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int n=stalls.size(),an=0;
    int i=0,j=stalls[n-1]-stalls[0],mid;

    while(i<=j)
    {
        mid=i+(j-i)/2;
        int c=k,a1=0,a2=1;

        c--;
        while(c>0)
        {
            if(stalls[a2]-stalls[a1]>=mid)
            {
                c--;a1=a2;
            }
            a2++;

            if(a2==n){break;}
        }

        if(c==0&&mid>an)
        {an=mid;i=mid+1;}
        else
        {j=mid-1;}
    }
    return an;
}

int main()
{
    while(true)
    {
        vector<int> stalls;stalls.push_back(1);
        int n=7;int k=4;
        for(int i=1;i<n;i++){int x=rand()%7+stalls[i-1]+1;stalls.push_back(x);}
        cout<<"#########################";
        if(aggressiveCows(stalls,k)!=aggressiveCows2(stalls,k)){cout<<endl<<"n = "<<n<<"       k = "<<k<<"       ac1 = "<<aggressiveCows(stalls,k)<<"       ac2 = "<<aggressiveCows2(stalls,k)<<endl;
        for(auto it:stalls){cout<<it<<"  ";}break;}
    }
    return 0;
}

*/

