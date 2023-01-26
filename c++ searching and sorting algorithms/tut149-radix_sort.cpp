#include<bits/stdc++.h>
using namespace std;

/*
RADIX SORT
The lower bound for the Comparison based sorting algorithm (Merge Sort,
Heap Sort, Quick-Sort .. etc) is Ω(nLogn), i.e., they cannot do better
than n*log(n). Counting sort is a linear time sorting algorithm that
sort in O(n+k) time when elements are in the range from 1 to k.

What if the elements are in the range from 1 to n^2?
We can’t use counting sort because counting sort will take O(n^2) which
is worse than comparison-based sorting algorithms.
Can we sort such an array in linear time?
Yes, we can using Radix Sort. The idea of Radix Sort is to do digit by
digit sort starting from least significant digit to most significant
digit. Radix sort uses counting sort as a subroutine to sort.

For each digit I where I varies from the least significant digit to the
most significant digit. Here we will be sorting the input array using STABLE
counting sort (or any stable sort) according to the i’th digit.

input 1,80,103,21,9 <=> 001,080,103,021,009

// implementation is for both negative and positive integers integers.
*/

void disp(vector<int>&a)
{
    cout<<endl;
    for(auto it:a)
    {
        cout<<it<<"  ";
    }
    cout<<endl;
}

void radix_sort(vector<int>&a)
{
    vector<int> b(10); //range  0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    vector<int> c(a.size());
    int t=1;

    int maxdigit=0,max=*max_element(a.begin(), a.end());
    while(true)
    {
        if(max==0){break;}
        max/=10;maxdigit++;
    }

    while(t<pow(10,maxdigit))
    {
        for(int i=0;i<b.size();i++)
        {
            b[i]=0;
        }
        for(int i=0;i<a.size();i++)
        {
            b[(a[i]/t)%10]++;
        }
        for(int i=1;i<b.size();i++)
        {
            b[i]+=b[i-1];
        }
        for(int i=a.size()-1;i>=0;i--)
        {
            c[b[(a[i]/t)%10]-1]=a[i];
            b[(a[i]/t)%10]--;
        }
        for(int i=0;i<a.size();i++)
        {
            a[i]=c[i];
        }
        t*=10;
    }
}


//ALTERNATE

/*

static int t=1;

bool compa(int a,int b)
{
    a/=t;b/=t;a%=10;b%=10;
    if(a<b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void radix2_sort(vector<int>&a)
{
    int maxdigit=0,max=*max_element(a.begin(), a.end());
    while(true)
    {
        if(max==0){break;}
        max/=10;maxdigit++;
    }
    while(t<pow(10,maxdigit))
    {
        stable_sort(a.begin(),a.end(),compa);
        disp(a);
        t*=10;
    }
}

*/


int main()
{
    int n,x;cin>>n;
    vector<int> a,b,c;
    for(int i=0;i<n;i++)
    {
        x=rand()%986925-rand()%53729+rand()%9925-rand()%979+rand()%92-rand()%7;
        //cin>>x;
        c.push_back(x);
        if(x>=0)
        {a.push_back(x);}
        else
        {x*=-1;
        b.push_back(x);}
    }
    disp(c);
    radix_sort(a);
    radix_sort(b);
    for(int i=0;i<b.size();i++)
    {
        c[i]=b[b.size()-1-i]*-1;
    }
    for(int i=0;i<a.size();i++)
    {
        c[i+b.size()]=a[i];
    }
    disp(c);

    return 0;
}

/*
In a typical computer, which is a sequential random-access machine, where
the records are keyed by multiple fields radix sort is used. For eg., you
want to sort on three keys month, day and year. You could compare two
records on year, then on a tie on month and finally on the date.
Alternatively, sorting the data three times using Radix sort first on
the date, then on month, and finally on year could be used.

It was used in card sorting machines with 80 columns, and in each column,
the machine could punch a hole only in 12 places. The sorter was then
programmed to sort the cards, depending upon which place the card had been
punched. This was then used by the operator to collect the cards which had
the 1st row punched, followed by the 2nd row, and so on.


Some key points about radix sort are given here
-It makes assumptions about the data like the data must be between a
range of elements.
-Input array must have the elements with the same radix and width.
-Radix sort works on sorting based on an individual digit or letter
position.
-We must start sorting from the rightmost position and use a stable
algorithm at each position.
-Radix sort is not an in-place algorithm as it uses a temporary count
array.


Radix sort is mostly used to sort the numerical values or the real values,
but it can be modified to sort the string values in lexicographical order.
It follows the same procedure as used for numerical values.
*/
