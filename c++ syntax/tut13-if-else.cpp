#include<iostream>
using namespace std;

int main()
{
int age;
cout<<"Enter your age";
cin>>age;

cout<<"Showing if    else if    else if    else"<<endl;

if (age>0&&age<18)
{
    cout<<"You are too young for military";
}
else if (age==18)
{
    cout<<"Only training allowed";
}
else if (age>18&&age<40)
{
    cout<<"You are ready to serve";
}
else if (age>40&&age<50)
{
    cout<<"You can command only";
}
else if (age>50)
{
    cout<<"You are very old";
}
else
{
    cout<<"Wrong input";
}

cout<<"\n\nShowing switch case"<<endl;

switch(age)
{
case 1:
    cout<<"age is 1";
    break;
case 18:
    cout<<"age is 18";
    break;
case 3:
    cout<<"age is 3"<<endl<<"\nI missed break statement after case 3 to see what will happen";
case 50:
    cout<<"\nage is 50";
    break;
default:
    cout<<"not special age case\n\n";
}
return 0;

}
