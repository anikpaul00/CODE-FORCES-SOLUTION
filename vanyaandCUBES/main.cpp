#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int lvls=0;
    int temp=0;
    int sum=0;
    for(int i=1;;i++){
            sum=sum+i;
            temp=temp+sum;
            if(temp>n)
                break;
            lvls++;
    }
    cout<<lvls<<endl;
    return 0;
}
