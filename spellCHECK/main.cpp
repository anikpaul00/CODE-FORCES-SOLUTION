#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    string s;

    for(int i=0;i<t;i++)
    {
        int a=0,b=0,c=0,d=0,e=0;
        cin>>n;
        cin>>s;
        if(n>5)
        {
            cout<<"NO"<<endl;
        }
        else
        {


        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='T')
            {
                a++;
            }else if(s[j]=='i')
            {
                b++;
            }else if(s[j]=='m')
            {
                c++;
            }else if(s[j]=='u')
            {
                d++;
            }else if(s[j]=='r')
            {
                e++;
            }
        }

    if(a==1&&b==1&&c==1&&d==1&&e==1)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    }
    }
    return 0;
}
