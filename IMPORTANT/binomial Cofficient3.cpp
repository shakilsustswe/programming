
///bottom up approach

#include<bits/stdc++.h>
using namespace std;
int binomialCof(int n,int k)
{
    int c[k+1];
    memset(c,0,sizeof(c));
    c[0]=1;
    for(i=1;i<=n;i++)
    {
        for(j=min(i,k);j>=0;j--)
        {
           ///complexity=o(n*k)&&space = o(k);
           c[j]=c[j]+c[j-1];
        }
    }
    return c[k];

}
int main()
{
    int n,k;
    cin>>n>>k;
    int ans = binomialCof(n,k);
    cout<<ans<<endl;
}
