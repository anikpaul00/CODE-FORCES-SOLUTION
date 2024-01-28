#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    string str1;
    int c=0;
    str1.resize(str.length());
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='1' || str[i]=='2' || str[i]=='3')
        {
            str1[i]=str[i];

        }
    }

    sort(str1.begin(),str1.end());
    bool firstNumber = true;
    for(int i=0;i<str1.length();i++)
    {

         if (str1[i] == '1' || str1[i] == '2' || str1[i] == '3') {
            if (!firstNumber) {
                cout << "+";
            }

            cout << str1[i];
            firstNumber = false;
        }

    }
    return 0;
}
