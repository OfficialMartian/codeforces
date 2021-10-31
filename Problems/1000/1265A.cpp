typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = true;
        string s;
        cin >> s;
        int n = s.length();
        if (n == 1)
        {
            cout << (s == "?" ? "a" : s) << nl;
            continue;
        }
        if (s[0] == '?')
        {
            if (s[1] == 'a')
                s[0] = 'b';
            else if (s[1] == 'b')
                s[0] = 'c';
            else
                s[0] = 'a';
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c')
            {
                if (s[i + 1] == s[i])
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if (s[i + 1] == '?')
                {
                    if (s[i - 1] == 'a')
                        s[i] = 'b';
                    else if (s[i - 1] == 'b')
                        s[i] = 'c';
                    else
                        s[i] = 'a';
                }
                else if (s[i + 1] == 'a' && s[i - 1] == 'a' ||
                         s[i + 1] == 'b' && s[i - 1] == 'a' ||
                         s[i + 1] == 'a' && s[i - 1] == 'b' ||
                         s[i + 1] == 'b' && s[i - 1] == 'b')
                    s[i] = 'c';
                else if (s[i + 1] == 'c' && s[i - 1] == 'a' ||
                         s[i + 1] == 'c' && s[i - 1] == 'c' ||
                         s[i + 1] == 'a' && s[i - 1] == 'c')
                    s[i] = 'b';
                else
                    s[i] = 'a';
            }
        }
        if (s[n - 1] == '?')
        {
            if (s[n - 2] == 'a')
                s[n - 1] = 'b';
            else if (s[n - 2] == 'b')
                s[n - 1] = 'c';
            else
                s[n - 1] = 'a';
        }
        cout << (flag ? s : "-1") << nl;
    }
    return 0;
}