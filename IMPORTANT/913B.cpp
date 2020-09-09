#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s[n]={0},p[n]={0};
    for(int i=1; i<n; i++)
    {
        cin>>s[i];
        s[i]--;
        p[s[i]]++;
    }
    int leaf[n]={0};
    for(int i=0;i<n;i++)
    {
        if(p[i]==0)
        {
            leaf[s[i]]++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(p[i]>0&&leaf[i]<3)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
