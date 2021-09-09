#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    map<char, int> a;
    for (int i = 0; i < s.length(); ++i)
        a[s[i]]++;
    if (a.size() % 2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}