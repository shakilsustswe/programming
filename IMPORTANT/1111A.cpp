#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1,str2;
    const char *test="aeiou";
    const char *result=test;

    int i=0,j=0,flag=0;
    cin>>str1;
    cin>>str2;
    if(str1.size()!=str2.size())
        cout<<"NO"<<endl;
        else
        {
            for(i=0;i<str1.size();i++)
            {
                if((strchr(result,str1[i])&&strchr(result,str2[i]))||(!strchr(result,str2[i])&&(!strchr(result,str1[i]))))
                   {

                   }
                else
                {
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==0)cout<<"YES"<<endl;
        }
    return 0;
}
