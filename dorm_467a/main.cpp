#include <bits/stdc++.h>

using namespace std;

int main()
{   int n;
    int p,q;
    cin>>n;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>p>>q;
        if(q-2>=p)
        {
            count++;

        }

    }
    cout<<count<<endl;

    return 0;
}
