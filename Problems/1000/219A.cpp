typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    bool flag = true;
    string s;
    map<char, int> a;
    cin >> k >> s;
    for (int i = 0; i < s.length(); ++i)
        a[s[i]]++;
    for (auto it = a.begin(); it != a.end(); ++it)
        if (it->second % k != 0)
        {
            flag = false;
            break;
        }
    if (flag)
    {
        string ans = "";
        for (auto it = a.begin(); it != a.end(); ++it)
        {
            int n = it->second / k;
            while (n--)
                ans += it->first;
        }
        while (k--)
            cout << ans;
        cout << endl;
    }
    else
        cout << "-1";
    return 0;
}