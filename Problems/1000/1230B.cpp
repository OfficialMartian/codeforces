typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, i = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    if (n == 1)
        cout << (k == 0 ? s : (s == "0" ? s : "0"));
    else
        for (i = 0; i < n; ++i)
        {
            if (k > 0)
            {
                if (i == 0)
                {
                    if (s[i] != '1')
                    {
                        cout << '1';
                        k--;
                    }
                    else
                        cout << s[i];
                }
                else
                {
                    if (s[i] != '0')
                    {
                        cout << '0';
                        k--;
                    }
                    else
                        cout << s[i];
                }
            }
            else
                cout << s[i];
        }
    cout << endl;
    return 0;
}