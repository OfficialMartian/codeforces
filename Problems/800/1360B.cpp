typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];
        sort(s.begin(), s.end());
        int mn = s.back() + 7;
        for (int i = 1; i < n; i++)
        {
            int diff = s[i] - s[i - 1];
            mn = (mn < diff) ? mn : diff;
        }
        cout << mn << endl;
    }
    return 0;
}