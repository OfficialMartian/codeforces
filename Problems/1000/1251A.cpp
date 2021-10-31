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
        string s;
        cin >> s;
        // vector<char> a;
        set<char> a;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] != s[i + 1])
                a.insert(s[i]);
            else
                i++;
        }
        // sort(a.begin(), a.end());
        for (auto x : a)
            cout << x;
        cout << endl;
    }
    return 0;
}