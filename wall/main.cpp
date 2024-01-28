#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,h;
    cin>>n;
    cin>>h;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int temp1=0;
    int temp2=0;
    int final=0;
     for(int i=1;i<=n;i++)
    {
        if(arr[i]>h)
        {
            temp2=temp2+2;
        }else
        {
            temp1=temp1+1;
        }
        final=temp1+temp2;
    }
    cout<<final<<endl;
    return 0;
}
