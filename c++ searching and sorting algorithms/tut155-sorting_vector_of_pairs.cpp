#include<bits/stdc++.h>
using namespace std;

//vector of pairs sorted using comparator functions

void disp(vector<pair<int, int>> &A)
{
    for(auto it:A)
    {
        cout<<it.first<<"  "<<it.second<<endl;
    }
}

bool wrtox(pair<int, int>& a,pair<int, int>& b)
{
	return (a.first == b.first) ? (a.second < b.second) : (a.first < b.first);
}

bool wrtoy(pair<int, int>& a,
					pair<int, int>& b) {
	return (a.second == b.second) ? (a.first < b.first) : (a.second < b.second);
}

int main()
{
    vector<pair<int, int>> A;
	int x, y;
	for (size_t i = 0; i < 10; i++) {
		x=rand()%18-9;y=rand()%9+1;
		A.push_back({x,y});
    }
    disp(A);cout<<endl;
    sort(A.begin(), A.end(),&wrtox);
    disp(A);cout<<endl;
    sort(A.begin(), A.end(),&wrtoy);
    disp(A);cout<<endl;
    return 0;
}




