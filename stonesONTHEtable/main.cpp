#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    string str;
    cin>>str;
    for(int i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
