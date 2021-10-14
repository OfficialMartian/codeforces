typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    string s;
    cin >> s;
    for (int i = 0, j = s.length() - 1; i <= j; i++, j--)
        if (s[i] != s[j])
        {
            count++;
            if (count > 1)
                break;
        }
    cout << (count == 1 ? "YES" : (count == 0 && s.length() % 2 ? "YES" : "NO"));
    return 0;
}