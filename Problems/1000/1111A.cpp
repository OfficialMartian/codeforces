typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t, v = "aeiou";
    cin >> s >> t;
    bool flag = true;
    if (s.length() != t.length())
        flag = false;
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if ((v.find(s[i]) != string::npos && v.find(t[i]) == string::npos) || (v.find(s[i]) == string::npos && v.find(t[i]) != string::npos))
            {
                flag = false;
                break;
            }
        }
    }
    cout << (flag ? "YEs" : "nO") << nl;
    return 0;
}