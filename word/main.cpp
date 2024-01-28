#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int low=0;
    int up=0;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            up++;
        }else{
        low++;
        }


    }
    if(low>up)
    {
        transform(str.begin(),str.end(),str.begin(),::tolower);
        cout<<str<<endl;
    }else if(low==up)
    {
        transform(str.begin(),str.end(),str.begin(),::tolower);
        cout<<str<<endl;
    }
    else
    {
        transform(str.begin(),str.end(),str.begin(),::toupper);
        cout<<str<<endl;
    }
    return 0;
}
