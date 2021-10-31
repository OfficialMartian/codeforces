typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int ans = 0, n;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        for (int j = i + 1; j < s.size(); j++)
            for (int k = j + 1; k < s.size(); k++)
                if (s[i] == 'Q' and s[j] == 'A' and s[k] == 'Q')
                    ans++;
    cout << ans << endl;
    return 0;
}