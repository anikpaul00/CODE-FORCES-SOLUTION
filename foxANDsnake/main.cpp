#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char str[n+1][m+1];  ///if runtime error occurs then add 1 with both n and m for increasing the space of the str
    int p=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(i%2!=0)
            {
                str[i][j]='#';
            }else if(i%2==0)
            {
               str[i][j]='.';

            }
        }
        if(i%2==0){
               if(p%2!=0)
               {
                   str[i][m]='#';
                   p++;


               }else if(p%2==0)
               {
                   str[i][1]='#';
                   p++;
               }
        }
    }


     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<str[i][j];
        }
        cout<<endl;
    }


    return 0;
}
