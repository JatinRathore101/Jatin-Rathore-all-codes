#include<bits/stdc++.h>
using namespace std;

// FILO or LIFO

void disp(stack<string> &s)
{
    cout<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<"  ";
        s.pop();
    }
    cout<<endl;
}

int main()
{
    stack<string> s;
    s.push("Jatin");
    s.push("Abhay");
    s.push("Sagnik");
    s.push("Darsh");
    s.push("SanGket");
    s.push("Aswath");
    s.push("Rishabh");
    s.push("Ayush");
    s.push("Vinay");

    disp(s);

    return 0;
}

