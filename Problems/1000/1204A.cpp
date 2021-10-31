typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n = 0;
    cin >> s;
    if (s.length() % 2 == 0)
        cout << s.length() / 2;
    else
    {
        for (int i = 0; i < s.length(); ++i)
            if (s[i] == '1')
                n++;
        cout << (n > 1 ? s.length() / 2 + 1 : s.length() / 2);
    }
    return 0;
}