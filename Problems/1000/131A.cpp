typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool flag = false;
    for (int i = 1; i < s.length(); ++i)
        if (s[i] >= 97 && s[i] <= 122)
        {
            flag = true;
            break;
        }
    if (!flag)
    {
        for (int i = 0; i < s.length(); ++i)
            if (s[i] >= 97 && s[i] <= 122)
                s[i] -= 32;
            else
                s[i] += 32;
        cout << s;
    }
    else
        cout << s;
    return 0;
}