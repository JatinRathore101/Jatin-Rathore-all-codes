#include<bits/stdc++.h>
using namespace std;

//  Binary Search with Duplicates // This program is written to work on ascending list input (duplicates allowed)
//  Find the first occurence of an integer in the given sorted sequence of integers

/*
Input:
7
2 4 4 4 7 7 9
4
9 4 5 2
Output:
6 1 -1 0
*/

int binary_search(const vector<int> &a, int x)
{
    int left = 0, right = a.size()-1,mid;
    while(true)
    {
        mid=(left+right)/2;
        if(a[mid]==x)
        {
            if(mid!=left)
            {
                for(int i=mid-1;i>=left;i--)
                {
                    if(a[i]!=x){return mid;}
                    else{mid--;}
                }
            }

            return mid;
        }
        else if(a[mid]<x)
        {
            if(mid==right)
            {
                break;
            }
            left=mid+1;
        }
        else
        {
            if(mid==left)
            {
                break;
            }
            right=mid-1;
        }
    }
    return -1;
}

int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    std::cout << binary_search(a, b[i]) << ' ';
  }
}
