#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    int t;
    cin>>t;

    while(t--)
    {   int m=0;
        cin>>a>>b>>c;
        if(a+b>=10)
        {
            m++;
        }else if(b+c>=10)
        {
            m++;
        }else if(c+a>=10)
        {
            m++;
        }

        if(m>0)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
