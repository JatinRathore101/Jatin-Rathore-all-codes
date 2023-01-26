#include<iostream>
using namespace std;

// function template

template<class T1=float,class T2=char,class T3=string>
void disp(T1 a,T2 b,T3 c)
{
    cout<<a<<" "<<b<<" "<<c<<"\n";
    cout<<"this id template generic function"<<"\n\n";
}

void disp(int a,int b,int c)
{
    cout<<a<<" "<<b<<" "<<c<<"\n";
    cout<<"Non template overloaded function\n\n\n";

}

int main()
{
    disp<string,string>("Jatin","loves","dal makhni"); // (string,string,left default)->(float,char,string) = (string,string,string)
    disp<int,float,char>(-52.223,49.7100,'72-1');
    // for char // 'a3e%' = '%' // 'abx'='x' // '8-1'='1' //
    disp("JATIN",'3',1.324); // even after we have not specified datatypes input in temp, neither these function argument match with default templates still template function runs.
    disp(1,1,1);
    return 0;
}

