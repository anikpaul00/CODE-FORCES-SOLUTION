#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    str.resize(n);
    cin>>str;
    int a=0;
    int b=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='A')
        {
            a++;
        }else
        {
            b++;
        }

    }

    if(a>b)
    {
        cout<<"Anton"<<endl;
    }else if(b>a)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    return 0;
}
