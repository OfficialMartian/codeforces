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
        int n, flag = 0;
        vector<int> V(26, 0);
        cin >> n;
        string s;
        cin >> s;
        V[s[0] - 'A']++;
        for (int i = 1; i < s.length(); ++i)
        {
            if (s[i] == s[i - 1])
                V[s[i] - 'A']++;
            else if (s[i] != s[i - 1])
            {
                if (V[s[i] - 'A'] > 0)
                    flag = 1;
                V[s[i] - 'A']++;
            }
        }
        if (flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}