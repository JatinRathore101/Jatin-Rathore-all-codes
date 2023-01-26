#include<bits/stdc++.h>
using namespace std;

/*
Patterns question
Pattern 1-to print cube made of capital alphabets , no of alphabets in side taken as input.

for n=3
    A B C
    B C D
    C D E

for n=4
    A B C D
    B C D E
    C D E F
    D E F G




Pattern 2-to print isoceles right triangle made of capital alphabets , no of alphabets in side taken as input.

for n=3
    A
    B C
    C D E

for n=4
    A
    B C
    C D E
    D E F G




Pattern 3-to print isoceles right triangle made of capital alphabets , no of alphabets in side taken as input.

for n=3
         D
       C D
     B C D

for n=4
          D
        C D
      B C D
    A B C D




Pattern 4-to print isoceles triangle made of symmetric numbers  , no of rows(altitude) in triangle taken as input.

for n=3
         1
       1 2 1
     1 2 3 2 1

for n=4
         1
       1 2 1
     1 2 3 2 1
   1 2 3 4 3 2 1




Pattern 5-to print rectangle of type shown below  , no of rows(altitude) in rectangle taken as input.

for n=3
   1 2 3 3 2 1
   1 2 * * 2 1
   1 * * * * 1


for n=4
   1 2 3 4 4 3 2 1
   1 2 3 * * 3 2 1
   1 2 * * * * 2 1
   1 * * * * * * 1




Pattern 6-to print rectangle of type shown below  , no of rows(altitude) in rectangle taken as input.

for n=3
   1 2 2 1
   1 * * 1
   * * * *


for n=4
   1 2 3 3 2 1
   1 2 * * 2 1
   1 * * * * 1
   * * * * * *

*/

int main()
{
    int n1,n2,n3,n4,n5,n6;cin>>n1>>n2>>n3>>n4>>n5>>n6;
    int i=1,j;
    char ch='A';

    while(i<=n1)
    {
        j=1;
        while(j<=n1)
        {
            cout<<char(ch+i+j-2)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<endl<<endl;

    i=1;
    while(i<=n2)
    {
        j=1;
        while(j<=i)
        {
            cout<<char(ch+i+j-2)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<endl<<endl;

    i=1;
    while(i<=n3)
    {
        j=1;
        while(j<=n3-i)
        {
            //cout<<char(ch+i+j-2)<<" ";
            cout<<"  ";
            j++;
        }
        while(j<=n3)
        {
            cout<<char(ch+j-1)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }


    cout<<endl<<endl;

    i=1;
    while(i<=n4)
    {
        j=1;
        while(j<=n4-i)
        {
            cout<<"  ";
            j++;
        }
        while(j<=n4)
        {
            cout<<i+j-n4<<" ";
            j++;
        }
        while(j<=n4+i-1)
        {
            cout<<i-j+n4<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }



    cout<<endl<<endl;

    i=1;
    while(i<=n5)
    {
        j=1;
        while(j<=n5-i+1)
        {
            cout<<j<<" ";
            j++;
        }
        while(j<=n5+i-1)
        {
            cout<<"* ";
            j++;
        }
        while(j<=2*n5)
        {
            cout<<2*n5-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }


    cout<<endl<<endl;

    i=1;
    while(i<=n6)
    {
        j=1;
        while(j<=n6-i)
        {
            cout<<j<<" ";
            j++;
        }
        while(j<=n6+i-2)
        {
            cout<<"* ";
            j++;
        }
        while(j<=2*n6-2)
        {
            cout<<2*n6-j-1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }


    return 0;
}

