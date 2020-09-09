#include<bits/stdc++.h>
using namespace std;
int binomialCof(int n,int k)
{
    ///Base case
    if(k==0||k==n)
    {
        return 1;
    }
    //recur
    return binomialCof(n-1,k-1)+binomialCof(n-1,k);

}
int main()
{
    int n,k;
    cin>>n>>k;
    int ans = binomialCof(n,k);
    cout<<ans<<endl;
}
