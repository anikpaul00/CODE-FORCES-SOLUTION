#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{   int c=0;
    long long int n;
    cin>>n;
    string s;
    s=to_string(n);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='4' || s[i]=='7')
        {
            c++;

        }
    }

    if(c==4 || c==7)
    {
        cout<<"YES"<<endl;

    }else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
