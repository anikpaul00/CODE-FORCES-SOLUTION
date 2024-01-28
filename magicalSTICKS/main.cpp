#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    long long int n;
    ///int c=0;
    long long int ans;
    while(t--)
    {
        cin>>n;
        ans=((n)*(n+1))/(2*n);
        cout<<ans<<endl;


    }
    return 0;
}
