#include<bits/stdc++.h>
int a[100000],b[100000];
using namespace std;
void counting_sort(int k,int n,int count[])
{
   for(int i=1;i<k+1;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        b[--count[a[i]]]=a[i];
    }
    for(int i=0;i<n;i++)
    {
      a[i]=b[i];
      cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,i=0,k=INT_MIN,count[100000]={0};
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        count[a[i]]++;
        k=max(a[i],k);
    }
    counting_sort(k,n,count);

}
