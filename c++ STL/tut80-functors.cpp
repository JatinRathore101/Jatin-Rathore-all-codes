#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

// function objects (functors) in C++ STL, need to include the header file < functional> to work with function objects or functors.

int main(){
// Function Objects (Functor) : A function wrapped in a class so that it is available;
int arr[] = {1, 73, 4, 2, 54, 7};
sort(arr,arr+5);
for (int i = 0; i < 6; i++)
{
cout<<arr[i]<<endl;
}
return 0;
}
