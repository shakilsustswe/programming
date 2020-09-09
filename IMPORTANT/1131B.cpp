#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,a[100009],b[100009],i=0,d=0;
   a[0]=0;
   b[0]=0;
   cin>>n;
   for(i=1;i<=n;i++)
   {
       cin>>a[i]>>b[i];
       int mx=max(a[i-1],b[i-1]);
      int mn=min(a[i],b[i]);
       if(mx<=mn){
        if(min(a[i-1],b[i-1])!=mx)
            d+=1;
        d+=mn-mx;
       }
   }
   cout<<d+1<<endl;
}
