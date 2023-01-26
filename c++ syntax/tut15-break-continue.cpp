#include<iostream>
using namespace std;

int main()
{
    cout<<"I\tam Jatin"<<endl;
    cout<<"backslash t is used to give a tab space in cout strings\n\n\n";

   cout<<"break;  statement also works in loops"<<endl;
    for(int i=2;i>-30;i-=2)
    {
        cout<<i<<"   ";
        if (i==-8)
        {   cout<<"\nBreaking the loop\n\n";
            break; //This will break out of the for loop
        }
    }

     cout<<"\ncontinue;  statement also works in loops"<<endl;
     cout<<"This will skip this perticular iteration number and continue to next iteration"<<endl;;
     for(int i=2;i>-30;i-=2)
    {
        if (i==-4||i==-6)
        {
            continue; //Beware while using continue; it may generate infinite loop

        }
        cout<<i<<"   ";
    }

    cout<<"\n\nNormal Loop\n";
    for(int i=2;i>-30;i-=2)
    {
        cout<<i<<"   ";
    }


return 0;
}
