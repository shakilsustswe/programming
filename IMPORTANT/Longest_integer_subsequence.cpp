
#include<bits/stdc++.h>
using namespace std;
int lis(int arr[],int n)
{
    int *lis,i=0,j=0,max=INT_MIN;
    lis=(int*)malloc(sizeof(int )*n);
    /*initialize LIS values for all indexes*/
    for(i=0;i<n;i++)
    {
        lis[i]=1;
    }
    /*find LIS values*/
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[i]>arr[j]&&lis[i]<lis[j]+1)
                lis[i]=lis[j]+1;
        }
    }
    /*find max*/
    for(i=0;i<n;i++)
    {
        if(max<lis[i])
            max=lis[i];

    }
     /**free memory*/
        return max;
}
int main()
{
    int n,arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans= lis(arr,n);
    cout<<ans<<endl;
}
