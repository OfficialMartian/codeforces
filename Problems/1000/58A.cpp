typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, a = "hello";
    cin >> s;
    int y = 0;
    for (int x = 0, i = 0; i < s.length(); ++i)
        if (s[i] == a[x])
            x++, y++;
    cout << (y == 5 ? "YES" : "NO");
    return 0;
}