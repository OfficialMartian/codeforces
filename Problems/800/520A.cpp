#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    string s;
    cin >> n >> s;
    for (auto &c : s)
        c = tolower(c);
    sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); ++i)
        if (s[i] != s[i - 1])
            count++;
    if (count == 26)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}