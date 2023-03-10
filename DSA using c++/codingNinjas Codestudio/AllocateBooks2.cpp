#include<bits/stdc++.h>
using namespace std;

long long ayushGivesNinjatest(int n, int m, vector<int> time)
{
    long long left=0,right=0,maxima=0;
    for(auto it:time){right+=it;if(left<it){left=it;}}
    long long x1=right,x2=right+1,mid;

    while(x1<x2&&left<=right)
    {
        mid=left+(right-left)/2;
        int i,N=n;
        long long temp=mid;

        for(i=0;i<m;i++)
        {
            if(temp-time[i]<0){N--;temp=mid;}
            temp-=time[i];
        }

        if(N>=1&&temp>=0){x2=x1;x1=mid;right=mid-1;}
        else if(N<1){left=mid+1;}
        else{right=mid-1;}
    }

    return x1;
}

int main()
{
    vector<int> time;
    int n,m;cin>>n>>m;

    for(int i=0;i<m;i++){int x;cin>>x;time.push_back(x);}
    cout<<endl<<"->  "<<ayushGivesNinjatest(n,m,time)<<"  <-"<<endl;
    return 0;
}














/*
Ayush is studying for ninjatest which will be held after 'N' days, And to score good marks he has to study 'M' chapters and the ith chapter requires TIME[i] seconds to study. The day in Ayush’s world has 100^100 seconds. There are some rules that are followed by Ayush while studying.
1. He reads the chapter in a sequential order, i.e. he studies i+1th chapter only after he studies ith chapter.
2. If he starts some chapter on a particular day he completes it that day itself.
3. He wants to distribute his workload over 'N' days, so he wants to minimize the maximum amount of time he studies in a day.
Your task is to find out the minimal value of the maximum amount of time for which Ayush studies in a day, in order to complete all the 'M' chapters in no more than 'N' days.
For example

if Ayush want to study 6 chapters in 3 days and the time that each chapter requires is as follows:
Chapter 1 = 30
Chapter 2 = 20
Chapter 3 = 10
Chapter 4 = 40
Chapter 5 = 5
Chapter 6 = 45

Then he will study the chapters in the following order

| day 1 : 1 , 2 | day 2 : 3 , 4 | day 3 : 5 , 6 |
Here we can see that he study chapters in sequential order and the maximum time to study on a day is 50, which is the minimum possible in this case.


*/

/*
1 <= N , M <= 10 ^ 4
1 <= TIME[i] <= 10 ^ 9
It is considered that there are infinite seconds in a day, on the planet where Ayush lives.
*/
