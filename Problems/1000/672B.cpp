typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[26] = {0}, count = 0;
    string s;
    cin >> s;
    if (n > 26)
        cout << "-1";
    else
    {
        for (int i = 0; i < n; i++)
            a[s[i] - 'a']++;
        for (int i = 0; i < 26; i++)
            if (a[i] != 0)
                count += a[i] - 1;
        cout << count;
    }
    return 0;
}