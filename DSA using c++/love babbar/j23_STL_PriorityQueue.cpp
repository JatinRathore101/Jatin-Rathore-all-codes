#include<bits/stdc++.h>
using namespace std;

// Priority queue is implemented like MAX HEAP

void disp(priority_queue<int> &pq)
{
    cout<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<"  ";
        pq.pop();
    }
    cout<<endl;
}

void disp(priority_queue<int,vector<int>,greater<int>> &pq)
{
    cout<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<"  ";
        pq.pop();
    }
    cout<<endl;
}

int main()
{
    priority_queue<int> pq_max; // max heap
    pq_max.push(rand()%10-1);
    pq_max.push(rand()%20+1);
    pq_max.push(rand()%30-1);
    pq_max.push(rand()%40+1);
    pq_max.push(rand()%30-1);
    pq_max.push(rand()%20+1);
    pq_max.push(rand()%10-1);
    disp(pq_max);


    priority_queue<int,vector<int>,greater<int>> pq_min; // min heap
    pq_min.push(rand()%10-1);
    pq_min.push(rand()%20+1);
    pq_min.push(rand()%30-1);
    pq_min.push(rand()%40+1);
    pq_min.push(rand()%30-1);
    pq_min.push(rand()%20+1);
    pq_min.push(rand()%10-1);
    disp(pq_min);

    return 0;
}

