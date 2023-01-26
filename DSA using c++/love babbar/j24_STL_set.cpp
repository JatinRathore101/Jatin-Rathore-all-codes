#include<bits/stdc++.h>
using namespace std;

// set

void disp(set<int>&s)
{
    cout<<endl;
    for(auto it:s){cout<<it<<"  ";}
    cout<<endl;
}

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(-1);
    s.insert(-1);
    s.insert(-1);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(-3);
    s.insert(-3);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    disp(s);

    cout<<endl<<"is -1 present -> "<<s.count(-1)<<endl;
    // count is used to cheak the presence of element //

    auto it=s.begin();++it;
    s.erase(it);
    disp(s);
    cout<<endl<<"is -1 present -> "<<s.count(-1)<<endl;

    it=s.find(1);++it; // we can't declare same name iterator again
    cout<<"element after 1 -> "<<*it;

    s.clear();
    disp(s);

    return 0;
}
