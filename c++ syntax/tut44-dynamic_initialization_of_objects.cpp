#include<iostream>
using namespace std;
// Dynamic initialization of objects

class BankDeposits
{
    int P;int Y;float R;float Net;
public:
    BankDeposits()
    {P=Y=R=Net=0;
    cout<<"\nNot invested yet";
    }
    BankDeposits(int a,int b,int c)
    {
        cout<<"\nInteger rate";
        P=a;Y=b;R=c;
        Net=P;
        for(int i=0;i<Y;i++)
        {
            Net=Net*(1+(R/100));
        }
    }
    BankDeposits(int a,int b,float c)
    {
        cout<<"\nDecimal rate";
        P=a;Y=b;R=c;
        Net=P;
        for(int i=0;i<Y;i++)
        {
            Net=Net*(1+R);
        }
    }

    void getdata()
    {
        cout<<"\nThe net return amount is = "<<Net;
    }
};

int main()
{
    int a;int b;int c;float C;
    cout<<"\nEnter principal, years and rate\n";
    cin>>a>>b>>c;
    BankDeposits B1(a,b,c);
    B1.getdata();
    cout<<"\nEnter principal, years and rate\n";
    cin>>a>>b>>C;
    BankDeposits B2(a,b,C);
    B2.getdata();

    return 0;
}