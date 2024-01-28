#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int n,x;
    while(t--)
    {
        cin>>n>>x;


    if(n<=2)
    {
        cout<<1<<endl;
    }else
    {
        int floorNumber;
        floorNumber=(n-3)/x + 2;
        cout<<floorNumber<<endl;
    }
    }

    return 0;
}
