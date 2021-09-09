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
        long n, a, b;
        cin >> n >> a >> b;
        string s(n, 'a');
        for (long i = 0; i < s.length(); i++)
            s[i] = 'a' + (i % b);
        cout << s << endl;
    }
    return 0;
}