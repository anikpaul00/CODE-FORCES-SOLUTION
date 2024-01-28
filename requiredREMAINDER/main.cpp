#include <bits/stdc++.h>

using namespace std;
/*
int main()
{
    int t;
    cin>>t;
    int x,y,n;
    int store=0;
    while(t--)
    {
        cin>>x>>y>>n;
        for(int i=0;i<=n;i++)
        {
            if(i%x==y)
            {

               store = max(i,i-1);

            }

        }

        cout<<store<<endl;
        store=0;

    }
    return 0;
}
*/


int main()
{
    int t;
    cin>>t;
    int x,y,n;
    while(t--)
    {
        cin>>x>>y>>n;
        int result=(n/x)*x+y;
        if(result>n)
        {
            result-=x;
        }
        cout<<result<<endl;

    }
    return 0;
}
