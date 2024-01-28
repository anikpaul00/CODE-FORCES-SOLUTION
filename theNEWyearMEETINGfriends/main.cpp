#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int arr[3];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    sort(arr,arr+3);
    int temp1=arr[1]-arr[0];
    int temp2=arr[2]-arr[1];
    cout<<temp1+temp2<<endl;

    return 0;
}
