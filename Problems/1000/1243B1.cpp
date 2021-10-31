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
        int n, cnt = 0;
        cin >> n;
        string s, t;
        map<char, int> ss, tt;
        cin >> s >> t;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                cnt++;
                ss[s[i]]++;
                tt[t[i]]++;
            }
        }
        if (ss.size() == 1 and tt.size() == 1 and cnt == 2)
            cout << "Yes";
        else
            cout << "No";
        cout << nl;
    }
    return 0;
}