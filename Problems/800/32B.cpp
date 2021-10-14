typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
        if (s[i] == '-')
        {
            cout << (s[i + 1] == '-' ? 2 : 1);
            i++;
        }
        else
            cout << 0;
    return 0;
}