#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,c;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(a+b==c)
        {
            cout<<"YES"<<endl;
        }else if(b+c==a)
        {
            cout<<"YES"<<endl;
        }else if(c+a==b)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
