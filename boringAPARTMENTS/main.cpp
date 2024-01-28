#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
  int y;
  cin>>y;
  int counter=0;
  for(int i=0;i<=9000;i++)
  {
      y=y+1;
      string str;
      str=to_string(y);
      sort(str.begin(),str.end());
      for(int j=0;j<str.length()-1;j++)
      {
          if(str[j]!=str[j+1])
          {
              counter++;
          }
      }
      if(counter==3)
      {
          cout<<y<<endl;
          break;
      }

      counter=0;

  }

  return 0;
}
