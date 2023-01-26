#include<bits/stdc++.h>
using namespace std;

/*
Stacks
FILO and LIFO

for stack s
functions -> s.push() , s.empty() , s.top() , s.pop()
*/

int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}

