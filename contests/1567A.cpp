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
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == 'D')
                s[i] = 'U';
            else if (s[i] == 'U')
                s[i] = 'D';
        }
        cout << s << endl;
    }
    return 0;
}