#include <bits/stdc++.h>

using namespace std;

int main()
{   int m=0;
    int c=0;
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            m++;
        }else if(b>a)
        {
            c++;
        }
    }
    if(m>c)
    {
        cout<<"Mishka"<<endl;
    }else if(c>m)
    {
        cout<<"Chris"<<endl;
    }else if(m==c)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    return 0;
}
