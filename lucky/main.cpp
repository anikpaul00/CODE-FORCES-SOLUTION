#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string str;
    for(int i=0;i<t;i++)
    {
        cin>>str;
        for(int j=0;j<1;j++)
        {
            int a=(int)(str[j]+str[j+1]+str[j+2]);
            int b=(int)(str[j+3]+str[j+4]+str[j+5]);
            if(a==b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
