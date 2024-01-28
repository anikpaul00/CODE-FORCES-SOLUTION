#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;


    vector<int> firstOccurrence(26, -1), lastOccurrence(26, -1);


    for (int i = 0; i < str.length(); ++i) {
        int index = str[i] - 'a';
        if (firstOccurrence[index] == -1) {
            firstOccurrence[index] = i;
        }
        lastOccurrence[index] = i;
    }


    for (int i = 0; i < 26; ++i) {
        if (firstOccurrence[i] != -1) {
            for (int j = firstOccurrence[i]; j <= lastOccurrence[i]; ++j) {
                if (str[j] - 'a' != i) {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
