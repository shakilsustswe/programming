
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,count=0;
    while(cin>>k&&k)
    {
        if(count++)cout<<endl;
      int arr[12],i=0,a1,a2,a3,a4,a5,a6;
      for(int i=0;i<k;i++)
      {
          cin>>arr[i];
      }
      for(a1=0;a1<k-5;a1++)
      for(a2=a1+1;a2<k-4;a2++)
      for(a3=a2+1;a3<k-3;a3++)
      for(a4=a3+1;a4<k-2;a4++)
      for(a5=a4+1;a5<k-1;a5++)
      for(a6=a5+1;a6<k;a6++)
        printf("%d %d %d %d %d %d\n",arr[a1],arr[a2],arr[a3],arr[a4],arr[a5],arr[a6]);
    }
    return 0;
}
