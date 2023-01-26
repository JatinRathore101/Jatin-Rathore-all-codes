#include<bits/stdc++.h>
using namespace std;

void disp(queue<string> &q)
{
    cout<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<"  ";
        q.pop();
    }
    cout<<endl;
}

int main()
{
    queue<string> q;
    q.push("Jatin");
    q.push("Abhay");
    q.push("Sagnik");
    q.push("Darsh");
    q.push("SanGket");
    q.push("Aswath");
    q.push("Rishabh");
    q.push("Ayush");
    q.push("Vinay");

    disp(q);
    return 0;
}

