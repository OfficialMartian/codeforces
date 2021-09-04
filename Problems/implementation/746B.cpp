typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s, a = "";
    cin >> s;
    if (s.length() % 2 == 0)
        for (int i = 0; i < s.length(); ++i)
            if (i % 2)
                a = a + s[i];
            else
                a = s[i] + a;
    else
        for (int i = 0; i < s.length(); ++i)
            if (i % 2)
                a = s[i] + a;
            else
                a = a + s[i];
    cout << a;
    return 0;
}