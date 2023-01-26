#include<bits/stdc++.h>
using namespace std;

/*
STL list uses a doubly linked list concept => two pointer approach
Also we cant randomnly access an element in a list, we will have to traverse to its location
*/

void disp(list<int> &l)
{
    cout<<endl;
    for(auto it:l)
    {
        cout<<it<<"  ";
    }
    cout<<endl;
}

int main()
{
    list<int> l;
    l.push_front(4);
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);
    l.push_back(5);
    l.push_back(6);
    l.push_back(7);
    l.push_back(8);
    l.push_back(9);
    disp(l);

    cout<<endl<<"l.pop_front() and l.pop_back()"<<endl;
    l.pop_front();
    disp(l);
    l.pop_back();
    disp(l);

    cout<<endl<<"erasing first element of existing list"<<endl;
    l.erase(l.begin());
    disp(l);
    auto it=l.begin();++it;++it;++it;
    cout<<endl<<"erasing fourth element of existing list"<<endl;
    l.erase(it);
    disp(l);
    cout<<endl<<"erasing full list"<<endl;
    l.erase(l.begin(),l.end());
    disp(l);

    list<int> l2(5,100);
    disp(l2);

    return 0;
}

