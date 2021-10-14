typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i, prev = -1, maxdist = INT_MIN;
    for (i = 0; i < s.length(); ++i)
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
        {
            if (maxdist < (i - prev))
                maxdist = i - prev;
            prev = i;
        }
    cout << max(maxdist, int(s.length() - prev));
    return 0;
}