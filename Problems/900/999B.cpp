typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
void rev(string &s, int i)
{
    string a = "";
    for (int j = i - 1; j >= 0; --j)
        a += s[j];
    for (int j = 0; j < i; ++j)
        s[j] = a[j];
}
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string::iterator it = s.begin();
    for (int i = 1; i <= n; ++i)
        if (n % i == 0)
            rev(s, i);
    cout << s;
    return 0;
}