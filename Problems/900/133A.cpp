typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool flag = false;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
        {
            flag = true;
            break;
        }
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}