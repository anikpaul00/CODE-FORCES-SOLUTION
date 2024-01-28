#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    int re=0;
    cin>>a>>b;
    if(a<b)
    {
        cout<<a ;
        re=b-a;
        if(re>=2)
        {
            cout<<" "<<re/2<<endl;
        }else
        {
            cout<<" "<<0<<endl;
        }
    }
    else
    {
        cout<<b ;
        re=a-b;
        if(re>=2)
        {
            cout<<" "<<re/2<<endl;
        }else
        {
            cout<<" "<<0<<endl;
        }

    }

    return 0;
}
