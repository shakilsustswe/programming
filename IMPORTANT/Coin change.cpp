
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,c[100],ct[100][100],w,mx=INT_MIN;
    cin>>n;
    cin>>w;
    for(int i=0; i<n; i++)
    {
        cin>>c[i];
    }
    sort(c,c+n);
    for(i=0; i<n; i++)
    {
        ct[i][0]=1;
    }
    for(i=0; i<n; i++)
    {
        for(int j=1; j<=w; j++)
        {
            if(c[i]>j)
            {
                if(i!=0)
                    ct[i][j]=ct[i-1][j];
                else
                    ct[i][j]=0;
            }
            else
            {
                if(i!=0)
                    ct[i][j]=ct[i-1][j]+ct[i][j-c[i]];
                else
                    ct[i][j]=ct[i][j-c[i]];
            }
        }
    }
    cout<<ct[n-1][w]<<endl;

}
