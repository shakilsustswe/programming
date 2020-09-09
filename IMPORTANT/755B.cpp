#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
vector<int>primes;
vector<int>::iterator it;
int k;
void sieve( )
{
    bool isPrime[MAX];
    for(int i=0; i<MAX; i++)
        isPrime[i]=true;
    for(int i=3; i*i<=MAX; i+=2)
    {
        if(isPrime[i])
        {
            for(int j=i*i; j<=MAX; j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
    primes.push_back(2);
    for(int i=3; i<MAX; i+=2)
    {
        if(isPrime[i])
        {
            primes.push_back(i);
        }
    }

}
int main()
{
    int n,i,ans;
    cin>>n;
    for(i=1;i<=1000;i++)
    {
        k=n*i+1;
       sieve();
       auto it =find(primes.begin(),primes.end(),k);
       if(it==primes.end())
       {
           cout<<i<<endl;
           break;
       }
    }
}
