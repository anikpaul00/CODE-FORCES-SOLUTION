#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,w;
    int pay=0;
    cin>>k>>n>>w;
    int borrow;
    for(int i=1;i<=w;i++)
    {
        pay=pay+(i*k);
    }
    if(pay<=n)
    {
        cout<<0<<endl;
    }else
    {
        borrow=pay-n;
        cout<<borrow<<endl;

    }
    return 0;
}
