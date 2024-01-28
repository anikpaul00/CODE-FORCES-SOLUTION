#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int fn=0;
    if(n%2==0)
    {
        fn=n/2;
    }else
    {
        fn=-(n+1)/2;
    }
    cout<<fn<<endl;
    return 0;
}
