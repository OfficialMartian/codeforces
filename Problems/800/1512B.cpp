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
        char a[405][405];
        vector<pair<int, int>> P;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '*')
                    P.pb({i, j});
            }
        if (P[0].first == P[1].first)
        {
            if (P[0].first == 0)
            {
                a[P[0].first + 1][P[0].second] = '*';
                a[P[1].first + 1][P[1].second] = '*';
            }
            else
            {
                a[0][P[0].second] = '*';
                a[0][P[1].second] = '*';
            }
        }
        else if (P[0].second == P[1].second)
        {
            if (P[0].second == 0)
            {
                a[P[0].first][P[0].second + 1] = '*';
                a[P[1].first][P[1].second + 1] = '*';
            }
            else
            {
                a[P[0].first][0] = '*';
                a[P[1].first][0] = '*';
            }
        }
        else
        {
            sort(P.begin(), P.end());
            a[P[0].first][P[1].second] = '*';
            a[P[1].first][P[0].second] = '*';
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << a[i][j];
            cout << endl;
        }
    }
    return 0;
}