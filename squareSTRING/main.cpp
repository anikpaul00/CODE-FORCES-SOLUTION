#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string str;
    int c=0;
    int mid;
    while(t--)
    {   c=0;
        cin>>str;
        mid=str.length()/2;
        ///cout<<str.length()<<endl;
        if(str.length()%2==0)
        {
            for(int i=0;i<mid;i++)
            {
                if(str[i]==str[mid+i])
                {
                    c++;
                }
            }
             if(c==mid)
            {
                cout<<"YES"<<endl;
            }else
            {
                cout<<"NO"<<endl;
            }
        }else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
