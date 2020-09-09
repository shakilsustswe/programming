#include<bits/stdc++.h>
int money,num_garment,price[25][25];
bool memo[25][210];
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>money>>num_garment;
        for(i=0; i<num_garment; i++)
        {
            cin>>price[i][0];
            for(j=1; j<=price[i][0]; j++)
                cin>>price[i][j];
        }


        memset(memo,false,sizeof memo);
        for(i=1; i<=price[0][0]; i++)
        {
            if(money-price[0][i]>=0)
                memo[0][money-price[0][i]]=true;

        }


        for(i=1; i<num_garment; i++)
        {
            for(j=0; j<money; j++)
            {
                if(memo[i-1][j])
                {
                    for(int k=1; k<=price[i][0]; k++)
                    {
                        if(j-price[i][k]>=0)
                        {
                            memo[i][j-price[i][k]] = true;
                        }
                    }
                }
            }
        }


        for(j=0; j<=money&&!memo[num_garment-1][j]; j++);



            if(j==money+1)
                cout<<"no solution"<<endl;
            else
                cout<<money-j<<endl;
    }
    return 0;
}
