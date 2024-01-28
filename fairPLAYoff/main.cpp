#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int temp1,temp2;
    while(t--)
    {
        int arr[4];
        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
        }

        if(arr[0]>arr[1])
        {
            temp1=arr[0];
        }else
        {
            temp1=arr[1];
        }

        if(arr[2]>arr[3])
        {
            temp2=arr[2];
        }else
        {
            temp2=arr[3];
        }

        sort(arr,arr+4);
        int fair=arr[3]-arr[2];
        if((temp2-temp1)==fair || (temp1-temp2)==fair)
        {
            cout<<"YES"<<endl;
        }else
        {
            cout<<"NO"<<endl;
        }




    }
    return 0;
}
