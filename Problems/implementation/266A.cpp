#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count;
    string s;
    cin >> count >> s;
    count = 0;
    char a = s[0];
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] == a)
            count++;
        a = s[i];
    }
    cout << count;
    return 0;
}