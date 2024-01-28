#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        int arr[n];
        int even=0;
        int odd=0;



        for(int k=0;k<n;k++)
        {
            cin>>arr[k];
              if(k%2!=arr[k]%2)
             {    if(arr[k]%2)
                  {
                    odd++;
                  }else
                  {
                    even++;
                }


            }
        }


       if(odd!=even)
       {
           cout<<-1<<endl;
       }else
       {
           cout<<odd<<endl;
       }



    }
    return 0;
}
