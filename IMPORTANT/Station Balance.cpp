
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],b[100],s,chamber;
    int cases = 1;
    while(cin>>chamber)
    {
        cin>>s;
        double sum=0,imbalance=0;
        for(int i=0; i<s; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sum/=chamber;
        cout<<sum<<endl;
        sort(arr,arr+s);
        for(int i=0; i<(2*chamber-s); i++)
        {
            b[i]=0;
        }
        for(int i=0,j=2*chamber-s; i<s; j++,i++)
        {
            b[j]=arr[i];
        }
        cout<<"Set #"<<cases++<<endl;
        for(int i=0,j=2*chamber-1; i<j; i++,j--)
        {
            cout<<i<<":"<<" ";
            if(b[j])
                cout<<b[j]<<" ";
            if(b[i])
                cout<<b[i]<<endl;
            else
                cout<<endl;


            imbalance+=abs(sum-(b[i]+b[j]));
        }
        printf("IMBALANCE = %.5lf\n\n",imbalance);
    }
}
