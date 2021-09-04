typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
string solve(string s)
{
    int count = 1;
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] == s[i - 1])
            count++;
        else if (s[i] != s[i - 1])
            count = 1;
        if (count == 7)
            return "YES";
    }
    return "NO";
}
int main()
{
    int count = 0;
    string s;
    cin >> s;
    cout << solve(s);
    return 0;
}