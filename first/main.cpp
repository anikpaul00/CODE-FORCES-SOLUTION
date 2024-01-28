#include <bits/stdc++.h>
using namespace std;
///inserting data inside a vector array
int main()
{   int give;
    vector<int> g1;
    for(int i=0;i<=5;i++)
    {   cin>>give;
        g1.push_back(give);
    }
     for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

    return 0;
}
