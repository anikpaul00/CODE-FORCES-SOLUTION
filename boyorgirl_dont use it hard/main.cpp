#include <bits/stdc++.h>

using namespace std;


int main() {
    string str1;
    cin>>str1;
    string str2;

    for (char c : str1) {

        if (str2.find(c) == string::npos) {
            str2 += c;
        }

    }

    int len=str2.length();
    if(len%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }else{
    cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}


