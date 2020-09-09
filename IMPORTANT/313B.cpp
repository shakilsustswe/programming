#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    string str;
    cin>>str;
    ///int ma[100009];
    map<int,int>ma;
    ma[0]=ma[1]=1;
    for(int i=1;i<str.size();i++)
    {
        if(str[i]==str[i-1])
        {
          ma[i+1]=ma[i]+1;
        }
        else
        {
            ma[i+1]=ma[i];
        }
    }
    int m;
    cin>>m;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        cout<<ma[y]-ma[x]<<endl;
    }
}
