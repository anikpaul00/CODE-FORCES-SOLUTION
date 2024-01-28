#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
for(int anik=0;anik<t;anik++)
{


    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int j=0;j<n-1;j++)
    {
        if(arr[j]==arr[j+1])
        {
            arr[j]=0;

        }else if((arr[j+1]-arr[j])==1)
        {

            arr[j]=0;
        }
    }
    int c=0;
    int ans=0;
    for(int k=0;k<n;k++)
    {   //cout<<arr[k]<<" ";
        if(arr[k]>=1)
        {
            c++;
        }

    }
    if(c==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    c=0;
}
    return 0;
}
