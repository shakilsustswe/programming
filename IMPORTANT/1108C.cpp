#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,count=0,mn=INT_MAX,i,j,index;
    vector<string>s= {"RGB","GBR","BRG","RBG","GRB","BGR"};
    cin>>n;
    string str;
    cin>>str;
    for(int i=0; i<6; i++)
    {
        count=0;
        for(j=0; j<n; j++)
        {
            if(str[j]!=s[i][j%3])
                count++;
        }
        if(count<mn)
        {
            mn=count;
            index=i;
        }
    }
    cout<<mn<<endl;
    for(j=0; j<n; j++)
    {
        cout<<s[index][j%3];
    }
    cout<<endl;
    return 0;
}
