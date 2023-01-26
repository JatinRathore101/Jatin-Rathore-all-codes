#include<bits/stdc++.h>
using namespace std;

/*

Bitwise operator
!  not
~  one complement
<< shift binary representation to left
>> shift binary representation to right
i++ post increment (first use then change)
++i pre increment (first change then use)
i--
--i

*/

int main()
{
    int a=3,b=4,c=20,d=pow(2,32)-1;
    cout<<"!a = "<<!b<<endl;// Not a
    cout<<"~b = "<<~b<<endl;// integral value of compliment of b's binary representation.
    cout<<"bool(b) = "<<bool(b)<<endl;
    cout<<"~bool(b) = "<<~bool(b)<<endl;
    cout<<"b<<2 = "<<b<<2<<endl;
    cout<<"(b<<1) = "<<(b<<1)<<endl; // b= 000...00000100 -> 000...00010000
    cout<<"(b<<2) = "<<(b<<2)<<endl;
    cout<<"(a<<2) = "<<(a<<2)<<endl; // a= 000...00000011 -> 000...00001100
    cout<<"(a<<3) = "<<(a<<3)<<endl; // a= 000...00000011 -> 000...00011000
    cout<<"(a>>1) = "<<(a>>1)<<endl; // a= 000...00000011 -> 000...00000001
    cout<<"(b>>2) = "<<(b>>2)<<endl; // b= 000...00000100 -> 000...00000001
    cout<<"(c>>2) = "<<(c>>2)<<endl; // c= 000...00010100 -> 000...00000101
    cout<<"d = "<<d<<endl; // b= 000...00000100 -> 000...00000001
    cout<<"(d<<1) = "<<(d<<1)<<endl; // b= 000...00000100 -> 000...00000001
    cout<<"(d>>1) = "<<(d>>1)<<endl; // b= 000...00000100 -> 000...00000001

    return 0;
}

