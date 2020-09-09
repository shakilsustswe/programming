#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int n,count1=0,count2=0;
    string m,f,s;
    set<char>se;
    cin>>n;
    cin>>m;
    for(int i=0;i<n;i++)
    {
        f+=m[i];
        se.insert(m[i]);
    }
    for(int i=n;i<2*n;i++)
    {
        s+=m[i];
        se.insert(m[i]);
    }
    if(se.size()==1)
        cout<<"NO"<<endl;
    else{
    sort(f.begin(),f.end());
    sort(s.begin(),s.end());
    cout<<f<<" "<<s<<endl;
    for(int i=0,j=n;i<n;i++,j++)
    {
        if(f[i]<s[i])
            count1++;
       else if(f[i]>s[i])
            count2++;
            if(count1!=0&&count2!=0)
            {
                cout<<"NO"<<endl;
                break;
                }
    }
    if((count1==n)||(count1==n))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
    return 0;
}
