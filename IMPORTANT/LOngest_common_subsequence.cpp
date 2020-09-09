
/*lcs*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j;
    string c1,c2;
    int count[100][100];
    cin>>c1;
    cin>>c2;
   /// int len=max(c1.size(),c2.size())
    for(i=-1; i<c1.size(); i++)
    {
        count[i][0]=0;
    }
    for(i=-1; i<c2.size(); i++)
    {
        count[0][i]=0;
    }
    for(i=0; i<c1.size(); i++)
    {
        for(j=0; j<c2.size(); j++)
        {
            if(c1[i]==c2[j])
            {
                    count[i+1][j+1]=count[i][j]+1;
            }
            else
            {
                count[i+1][j+1]=max(count[i][j+1],count[i+1][j]);
            }
        }
    }
    cout<<count[i][j]<<endl;

}
