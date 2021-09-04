typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, a = "";
        cin >> s;
        a += s[0];
        for (int i = 1; i < s.length(); i += 2)
            a += s[i];
        cout << a << endl;
    }
    return 0;
}