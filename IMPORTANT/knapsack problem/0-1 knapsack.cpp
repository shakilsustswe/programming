
#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    int n,weight;
    cin>>n;
    cin>>weight;
    int p[n+1],w[n+1],i=0;
    for(i=0; i<n; i++)
    {
        cin>>w[i];
    }
    for(i=0; i<n; i++)
    {
        cin>>p[i];
    }
    multimap<int,int>wp;
    for(i=0; i<n; i++)
    {
        wp.insert(pair<int,int>(w[i],p[i]));
    }
    auto it = wp.begin();
    for(i=1,it=wp.begin(); it!=wp.end(); it++,i++)
    {
        w[i]=it->first;
        p[i]=it->second;
    }
    for(i=1; i<=n; i++)
    {
        cout<<w[i]<<" "<<p[i]<<endl;
    }
    int M[n+1][weight+1];
    for(i=0; i<=n; i++)
    {
        M[i][0]=0;
    }
    for(i=0; i<=weight; i++)
    {
        M[0][i]=0;
    }
    for(i=1; i<=n; i++)
    {
        for(int j=1; j<=weight; j++)
        {
            if(j>=w[i])
                M[i][j]=max(M[i-1][j],(M[i-1][j-w[i]]+p[i]));
            else
            {
                M[i][j]=M[i-1][j];
            }
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<M[n][weight]<<endl;
    return 0;
}
