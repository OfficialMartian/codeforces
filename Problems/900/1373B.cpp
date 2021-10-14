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
        int count0 = 0, count1 = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '0')
            {
                count0++;
            }
        }
        count1 = s.length() - count0;
        cout << (min(count1, count0) % 2 ? "DA" : "NET") << endl;
    }
    return 0;
}