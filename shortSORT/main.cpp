#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string str;
    while(t--)
    {
        cin>>str;
        str.resize(4);
        if(str[0]=='c' && str[2]=='a')
        {
            cout<<"YES"<<endl;
        }
        else if(str[2]=='a')
        {
            cout<<"NO"<<endl;
            continue;
        }else if(str[0]=='c')
        {
            cout<<"NO"<<endl;
            continue;
        }else
        {
            cout<<"YES"<<endl;
        }



    }
    return 0;
}
