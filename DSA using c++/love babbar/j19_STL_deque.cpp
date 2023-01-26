#include<bits/stdc++.h>
using namespace std;

void disp_dq(deque<int> &dq)
{
    cout<<endl;
    for(auto it:dq){cout<<it<<"  ";}
    cout<<endl<<"size = "<<dq.size();
    // <<"       capacity = "<<dq.capacity();     std::deque<int>' has no member named 'capacity'|
    cout<<endl;
}

int main()
{
    deque<int> dq;
    dq.push_front(1);
    disp_dq(dq);
    dq.push_front(2);
    disp_dq(dq);
    dq.push_front(3);
    disp_dq(dq);
    dq.push_front(4);
    disp_dq(dq);
    dq.push_back(5);
    disp_dq(dq);
    dq.push_back(6);
    disp_dq(dq);
    dq.push_back(7);
    disp_dq(dq);
    dq.push_back(8);
    disp_dq(dq);

    dq.pop_front();
    disp_dq(dq);
    dq.pop_back();
    disp_dq(dq);

    cout<<"\ncomplete erase";
    dq.erase(dq.begin(),dq.end());
    disp_dq(dq);

    dq.push_front(4);
    disp_dq(dq);
    dq.push_back(5);
    disp_dq(dq);
    dq.push_back(6);
    disp_dq(dq);
    dq.push_back(7);
    disp_dq(dq);
    dq.push_back(8);
    disp_dq(dq);

    cout<<"\nselective erase";
    dq.erase(dq.begin(),dq.begin()+2);
    disp_dq(dq);



    return 0;
}


