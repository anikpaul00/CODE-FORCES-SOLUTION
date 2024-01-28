#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int c=0;
    sort(str.begin(),str.end());
    for(int i=0;i<str.length();i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            if(str[i]!=str[i+1])
            {
               c++;
            }

        }
    }
    cout<<c<<endl;
    return 0;
}
