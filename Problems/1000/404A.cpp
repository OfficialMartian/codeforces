typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> a;
    for (int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        a.pb(s);
    }

    char one = a[0][0], two = a[0][1];
    bool flag = true;
    if (one == two)
        cout << "NO";
    else
    {
        for (int i = 0; i < a.size(); ++i)
            for (int j = 0; j < a[i].size(); ++j)
                if (i + j == n - 1 || i == j)
                {
                    if (a[i][j] != one)
                    {
                        flag = false;
                        break;
                    }
                }
                else
                {
                    if (a[i][j] != two)
                    {
                        flag = false;
                        break;
                    }
                }
        cout << (flag ? "YES" : "NO");
    }
    return 0;
}