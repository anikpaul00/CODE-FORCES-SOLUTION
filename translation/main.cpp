#include <bits/stdc++.h>

using namespace std;

int main()
{   string str1,str2,str3;
    cin>>str1>>str2;
    str3=str1;
    std::reverse(str3.begin(), str3.end());

    if(str3==str2)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
