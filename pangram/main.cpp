#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    int c=0;

    transform(str.begin(),str.end(),str.begin(), ::tolower);
    sort(str.begin(),str.end());
    for(int i=0;i<n;i++)
    {

          if(str[i]!=str[i+1])
        {
             c++;
        }


    }
    if(c>=26)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
