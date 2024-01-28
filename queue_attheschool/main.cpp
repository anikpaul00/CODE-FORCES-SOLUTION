#include <bits/stdc++.h>

using namespace std;

int main()
{   int n,t;

    cin>>n>>t;
    string str;
    cin>>str;
    int temp;
    for(int i=1;i<=t;i++)
    {
       for(int j=1;j<n;j++)
       {
           if(str[j]=='B' || str[j+1]=='G')
           {
               temp=str[j];
               str[j]=str[j+1];
               str[j+1]=temp;
           }

       }

    }

    cout<<str<<endl;
    return 0;
}///unfinished hoi nai
