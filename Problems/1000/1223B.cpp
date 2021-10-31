typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        string s, t;
        cin >> s >> t;
        int c = 0;
        for (int i = 0; i < s.length(); i++)
            for (int j = 0; j < s.length(); j++)
                if (s[i] == t[j])
                    c++;
        cout << (c ? "YES" : "NO") << endl;
    }
    return 0;
}