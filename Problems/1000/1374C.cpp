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
        string s;
        cin >> s;
        n = 0;
        for (int i = 0; i < s.length(); ++i)
            (s[i] == '(' ? n++ : (n != 0 ? n-- : n = n));
        cout << n << endl;
    }
    return 0;
}