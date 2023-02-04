#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{
        vector<bool> primes(n+1,true); // index represents number;

        primes[0]=false;
        primes[1]=false;
        int p=0;

        for(int i=2;i<n;i++)
        {
            if(primes[i])
            {   p++;
                for(int j=2*i;j<n;j+=i)
                {primes[j]=false;}
            }
        }

        return p;
}


void simpleSieve(int limit)
{
    bool mark[limit];
    for(int i=0;i<limit;i++)
    {mark[i]=true;}

    for(int p=2; p*p<limit; p++)
    {
        if (mark[p] == true)
        {
            for (int i=p*p; i<limit; i+=p)
            {
                mark[i] = false;
            }
        }
    }

    for (int p=2; p<limit; p++)
    {
        if (mark[p] == true)
        {
            cout << p << "  ";
        }
    }
}

int main()
{
    int n;cin>>n;
    cout<<endl<<"Total number of prime numbers strictly less than  "<<n<<"  are  "<<countPrimes(n)<<endl;

    //simpleSieve(n);

    return 0;
}







/*
//  Sieve of Eratosthenes  //  time complexity = n*(log(log(n)))  //
int countPrimes(int n)
{
    vector<bool> primes(n,true); // index represents number;

    primes[0]=false;
    primes[1]=false;
    int p=0;

    int i;
    for(i=2;i*i<n;i++)
    {
        if(primes[i])
        {
            p++;
            for(int j=i*i;j<n;j+=i)
            {
                primes[j]=false;
            }
        }
    }

    while(i<n){if(primes[i])p++;i++;}
    return p;
}
*/
