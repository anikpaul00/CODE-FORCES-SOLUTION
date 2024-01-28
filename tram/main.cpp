#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a,b;
    int remaining=0;
    int store=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        cin>>b;
        remaining=remaining+b-a;
        if(store<remaining)
        {
            store=remaining;
        }



    }
    cout<<store<<endl;

    return 0;
}
