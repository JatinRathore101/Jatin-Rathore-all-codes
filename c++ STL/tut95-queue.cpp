#include<bits/stdc++.h>
using namespace std;

/*
Queue - FIFO
for queue q -
functions -> q.push() , q.empty() , q.front() , q.pop()
*/

int main()
{
    queue<string> q;
    q.push("dfvh");
    q.push("fc432");
    q.push("3ddd");
    q.push("zx");
    q.push("xae");

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}

