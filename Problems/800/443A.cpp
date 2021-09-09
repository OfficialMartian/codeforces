#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    map<char, int> a;
    getline(cin, s);
    for (int i = 1; i < s.length(); i += 3)
    {
        if (s[i] >= 97 && s[i] <= 122)
            a[s[i]]++;
    }
    cout << a.size();
    return 0;
}