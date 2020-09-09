#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b=0,l=0,ans=0;
        cin>>n;
        for(int i=1;i<=9;i++)
        {
          b=b*10+1;
          for(int j=1;j<=9;j++)
          {
              if(b*j<=n)
                ans+=1;
          }
        }
        cout<<ans<<endl;
    }
    return 0;
}
