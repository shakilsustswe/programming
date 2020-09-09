#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int arr[100005];
set<int>s;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,f=1;
        s.clear();
        v.clear();
        cin>>n;
        int x;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            s.insert(i+1);
        }
        v.push_back(arr[0]);
        x=arr[0];
        s.erase(x);
        for(int i=1;i<n;i++)
        {
            if(x==arr[i])
            {
                auto it=s.begin();
                if(*it<x)
                {
                    v.push_back(*it);
                    s.erase(*it);
                }
                else
                {
                    f=0;
                    break;
                }
            }
            else if(arr[i]>x)
            {
              x=arr[i];
              s.erase(x);
              v.push_back(x);
            }
        }
        if(!f)cout<<"-1"<<endl;
        else
        {
            for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
    }
}
