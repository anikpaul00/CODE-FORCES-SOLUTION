#include<bits/stdc++.h>
using namespace std;
int main()
{

  int a,b,c,d;
  int t;
  int p=0,q=0,r=0;
  cin>>t;
  while(t--)
  {
    cin>>a>>b>>c>>d;
    if(a<b)
    {
      p++;
    }
    if(a<c)
    {
      q++;
    }
    if(a<d)
    {
      r++;
    }

    cout<<(p+q+r)<<endl;
    p=0;
    q=0;
    r=0;


  }



  return 0;

}
