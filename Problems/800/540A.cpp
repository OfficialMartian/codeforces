typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    int n, total = 0;
    cin >> n >> s1 >> s2;
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        a = s1[i] - '0';
        b = s2[i] - '0';
        total += min(abs(a - b), 10 - abs(a - b));
    }
    cout << total << endl;
    return 0;
}