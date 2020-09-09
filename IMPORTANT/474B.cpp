#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    int n,i=0,m=0,r=0,j=0,k,a2[100009],a1[100009];
    ///map<int,int>a2;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a1[i];
        j=r+1;
        r+=a1[i];
        for(;j<=r;j++)a2[j]=i;
    }
    cin>>m;
    while(m--)
    {
        cin>>k;
        cout<<a2[k]<<endl;
    }
}
