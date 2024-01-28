#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[6][6];
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>arr[i][j];
        }
    }

    int temp=0;
    int store=0;
    int ans=0;
      for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(arr[i][j]==1)
            {
                if(i>3)
                {
                    temp=i-3;
                }else if(i<=3)
                {
                    temp=3-i;
                }
                if(j>3)
                {
                    store=j-3;
                }else if(j<=3)
                {
                    store=3-j;
                }
                break;
            }
        }
    }
    ans=temp+store;
    cout<<ans<<endl;
    return 0;
}
