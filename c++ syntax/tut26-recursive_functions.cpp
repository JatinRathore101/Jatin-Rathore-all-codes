#include<iostream>
using namespace std;

// Recursive functions
// Demonstrating for {fibonaci series of n terms} and {factorial of a number} //




int nth_fibonaci(int n) // First Recurssive function --> Direct Recurtion
{   if (n==0){return 0;}
    if (n==1||n==2){return 1;}
    return nth_fibonaci(n-1)+nth_fibonaci(n-2);
}




int factorial(int n)   // Second Recurssive function --> Direct Recurtion
{
    if (n==0||n==1){return 1;}
    return n*factorial(n-1);
}





void printFun(int n) // Third Recurssive function --> Direct Recurtion
{
    if (n < 1)
        return;
    else {
        cout << n << " ";
        printFun(n - 1);
        cout << n << " ";
        return;
    }
}





void indirectRecFun2(int n); // Indirectly recurssion over two functions
void indirectRecFun1(int n)
{
    if (n==17){return;}
    cout<<n<<"  ";n++;
    indirectRecFun2(n);
}
void indirectRecFun2(int n)
{
    if (n==17){return;}
    cout<<n<<"  ";n++;
    indirectRecFun1(n);
}







int main()
{
    cout<<"The fibonacci series with 7 terms is ";

    for(int i=0;i<7;i++)
    cout<<nth_fibonaci(i)<<" ";

    cout<<"\n\n";


    cout<<"The factorial of 7 is = "<<factorial(7)<<"\n\n";


    printFun(7);
    cout<<"\n\n";


    indirectRecFun1(7);
    cout<<"\n\n";


    return 0;
}
