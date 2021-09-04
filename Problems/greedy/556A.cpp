typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ones = 0, zeros = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; ++i)
        s[i] == '0' ? zeros++ : ones++;
    cout << n - 2 * min(zeros, ones);
    return 0;
}