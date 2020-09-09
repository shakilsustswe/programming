
///bottom up approach
///complexity=o(n*k)&&space = o(n*k);

#include<bits/stdc++.h>
using namespace std;
int binomialCof(int n,int k)
{
    int c[n+1][k+1];
    int i,j;
    //bottom up manner
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=min(i,k);j++)
        {
           ///base case
           if(j==0||j==i)
                c[i][j]=1;
           ///calculate value using previosly stored values
           else
            c[i][j]=c[i-1][j-1]+c[i-1][j];
        }
    }
    return c[n][k];

}
int main()
{
    int n,k;
    cin>>n>>k;
    int ans = binomialCof(n,k);
    cout<<ans<<endl;
}
