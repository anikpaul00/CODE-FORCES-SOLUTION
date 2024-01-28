#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    int c=0;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)

        {
            for(int j=1;j<=n;j++)
            {
                if(arr[i]!=arr[j])
                {
                    c++;

                }

            }
            if(c==n-1)
            {
                cout<<i<<endl;
            }
            c=0;
        }

    }
    return 0;
}
