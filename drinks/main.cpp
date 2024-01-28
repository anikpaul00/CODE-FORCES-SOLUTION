#include <bits/stdc++.h>

using namespace std;

int main()
{   int n;

    cin>>n;
    float p;
    float ani=0;
    for(int i=1;i<=n;i++)
    {
        cin>>p;
        ani=ani+( p/100 );

    }

    float ans;
    ans=ani/n;
    cout<<100*ans<<endl;

    return 0;
}
