#include <iostream>

using namespace std;

int main()
{   int t;
    int h,m;
    cin>>t;
    int d=0;
    for(int i=0;i<t;i++)
    {
        cin>>h>>m;
        d=h*60;
        cout<<1440-d-m<<endl;

    }

    return 0;
}
