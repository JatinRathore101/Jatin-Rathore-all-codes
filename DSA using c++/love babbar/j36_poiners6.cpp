#include<bits/stdc++.h>
using namespace std;

// types of pointes text at coding ninjas // https://www.codingninjas.com/codestudio/guided-paths/pointers/content/235645/offering/3168908
// NULL pointer // void pointer // double/triple..... pointer // wild pointer // dangling pointer

void func1(int arr[],int n)
{
    cout<<endl<<endl<<"sizeof(arr) = "<<sizeof(arr)<<endl;
    cout<<"warning: 'sizeof' on array function parameter 'arr' will return size of 'int*'"<<endl;
    cout<<endl;
    arr[2]++;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void func2(int* arr,int n)
{
    cout<<endl<<endl<<"sizeof(arr) = "<<sizeof(arr)<<endl;
    cout<<endl;
    arr[2]++;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void func3(int arr[],int n)
{
    cout<<endl<<endl<<"sizeof(arr) = "<<sizeof(arr)<<endl;
    cout<<"warning: 'sizeof' on array function parameter 'arr' will return size of 'int*'"<<endl;
    cout<<endl;
    arr[2]++;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void func4(int* arr,int n)
{
    cout<<endl<<endl<<"sizeof(arr) = "<<sizeof(arr)<<endl;
    cout<<endl;
    arr[2]++;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

int main()
{
    int arr[20]={3,6,3,7,2,9,2};
    func1(arr,7);
    func2(arr,7);
    func3(arr+3,4);
    func4(arr+3,4);
    return 0;
}

