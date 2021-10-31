typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0, y = 0;
    for (int i = 0; i < n; ++i)
        s[i] == 'L' ? x++ : y++;
    cout << x + y + 1;
    return 0;
}