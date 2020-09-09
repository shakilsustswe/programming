
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int a,b;
    int n;
    bool first = true;
    int num[]={0,1,2,3,4,5,6,7,8,9};
    vector<pair<int,int>>v[100];
    do{
        a=num[0]*10000+num[1]*1000+num[2]*100+num[3]*10+num[4];
        b=num[5]*10000+num[6]*1000+num[7]*100+num[8]*10+num[9];
        if(a%b==0)
        {
            v[a/b].push_back(make_pair(a,b));
        }
    }
    while(next_permutation(num,num+10));
    while(cin>>n)
    {
        if(n==0)
            break;
        if(!first)
            cout<<endl;
        if(v[n].size()==0)
        {
            cout<<"There are no solutions for "<<n<<"."<<endl;

        }else
        {
            for(int i=0,sz=v[n].size();i<sz;i++)
            {
                cout<<v[n][i].first<<" / "<<(v[n][i].second<10000?"0" : "")<<v[n][i].second<<" = "<<n<<endl;
            }
        }
        first=false;
    }
    return 0;
    }
