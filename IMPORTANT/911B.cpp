/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,mx=0,temp=0;
    cin>>n>>a>>b;

    for(int i=1;i<=a&&i<=b;i++)
    {
        temp=a/i+b/i;
        if(temp>=n)
            mx=max(mx,i);
    }
    cout<<mx<<endl;
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    int mx=1;

    for(int i=1; i<n; i++)
    {
        int tmp=min(a/i,b/(n-i));
        mx=max(mx,tmp);
    }
    cout<<mx<<endl;
}

