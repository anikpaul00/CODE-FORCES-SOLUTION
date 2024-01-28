#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    string str;
    int c=0;
    while(t--)
    {
        cin>>str;

            if(str[0]=='Y' || str[0]=='y')
            {
                c++;
            }
            if(str[1]=='E' || str[1]=='e')
            {
                c++;
            }
            if(str[2]=='S' || str[2]=='s')
            {
                c++;
            }

        if(c==3)
        {
            cout<<"YES"<<endl;

        }else
        {
            cout<<"NO"<<endl;
        }
        c=0;
    }
    return 0;
}
