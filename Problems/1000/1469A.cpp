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
        int count = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); ++i)
            if (s[i] == '?')
                count++;
        cout << (count % 2 ? "NO" : (s[0] == ')' || s[s.length() - 1] == '(' ? "NO" : "YES")) << endl;
    }
    return 0;
}