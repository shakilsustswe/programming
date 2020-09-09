#include<bits/stdc++.h>
#include<vector>

using namespace std;
int main()
{
    string str;
    vector<char>c;
    int count1=0,count2=0;
    cin>>str;
    for(int i=0; i<str.size(); i++)
        {
            c.push_back(str[i]);
        }
    int i=1;
    while(i<c.size())
    {
        if(c[i-1]==c[i])
        {
            int k=i+1,l=i-1;
            c.erase(c.begin()+l,c.begin()+k);
            i--;
            if(count1<=count2)
                count1++;
            else
                count2++;
        }
        else
            i++;

    }
    if(count1>count2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
