#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);  ///vector is dynamic array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sereja=0;
    int dima=0;
    int turn=1;
    while(!arr.empty())
    {

        if(turn%2!=0)
        {
            if(arr.front()>arr.back())
            {
                sereja=sereja+arr.front();
                arr.erase(arr.begin());
            }else
            {
                sereja=sereja+arr.back();
                arr.erase(arr.end()-1);
            }
            turn++;
        }else
        {
            if(arr.front()>arr.back())
            {
                dima=dima+arr.front();
                arr.erase(arr.begin());
            }else
            {
                dima=dima+arr.back();
                arr.erase(arr.end()-1);
            }
            turn++;
        }

    }


   cout<<sereja<<" "<<dima<<endl;


    return 0;
}
