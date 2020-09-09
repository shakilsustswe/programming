#include<bits/stdc++.h>
int number,numbers;
int num[21];
int ans;
using namespace std;
void DFS(int sum,int i)
{
   if(sum>number)return ;
   if(sum==number)ans=1;
   for(;i<numbers;i++)
   {
    DFS(sum+num[i],i+1);
    ///cout<<sum<<" "<<i<<endl;
   }
}
int main()
{
  int test_case;
  cin>>test_case;
  while(test_case--)
  {
      cin>>number;
      cin>>numbers;
      for(int i=0;i<numbers;i++)
      {
          cin>>num[i];
      }
      ans=0;
      DFS(0,0);
      if(ans)cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
  }
  return 0;
}
