/*#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,arr[200005],i=0,test=0,b[200005],count=0,j=0;
        vector<int>v;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(i=n-1; i>=0; i--)
        {
            if(arr[i]%2==0){
            while(arr[i]%2==0)
            {
                if(arr[i]%2==0){
                for(j=i-1; j>=0; j--)
                {
                      if(arr[i]==arr[j])
                      {
                          arr[j]/=2;
                      }
                }
                count++;
                }
                arr[i]/=2;
            }
            }
        }
        cout<<count<<endl;
    }
}
*/
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,arr[200005],i=0,test=0,b[200005],count=0,j=0,k=0;
        set<int>s;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0){
            s.insert(arr[i]);
            }
        }
        while(s.size())
        {
           auto it = *s.rbegin();
           k=it/2;
           if(k%2==0)
            s.insert(k);
           s.erase(it);
           count++;
        }
        cout<<count<<endl;
    }
}
