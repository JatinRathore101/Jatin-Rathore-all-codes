#include<iostream>
using namespace std;

int main()
{
    //Loops in C++     => 3 types {for}, {while}, {do while}.

    /* Syntax of for loop

       for(initialization;condition;updation)
       {Body of the loop}

       */
cout<<"Using for loop\n";
    for(int i=0;i<25;i++)
    {
        cout<<(i+1)*3<<"  ";
    }

    /* Syntax of while loop

       while(condition)
       {body of the loop}

    */
    cout<<"\n\nSame output using while\n";
    int i=0; //pervious i has scope limited to for loop
    while(i<25)
    {

        cout<<(i+1)*3<<"  ";
        i++;


    } // infinite while loop use condition as while(true) or while(-1<0) etc


    /* Syntax of do while loop

       do{
       body of the loop
       }
       while(condition)


    */
    cout<<"\n\nSame output using do while\n";
    i=0;
    do
    {

        cout<<(i+1)*3<<"  ";
        i++;


    }while(i<25);
// even if this condition is always false sill do while loop works for once
    do{cout<<"\n\nLoop working even if the condition is always false\n\n";}while(1>2);



return 0;
}
