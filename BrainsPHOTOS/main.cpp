#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int c=0;
    int p=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            p++;
            if(arr[i][j]=='B' || arr[i][j]=='W' || arr[i][j]=='G')
            {
                c++;
            }
        }
    }

    if(c==p)
    {
        cout<<"#Black&White"<<endl;
    }else
    {
        cout<<"#Color"<<endl;
    }
    return 0;
}
