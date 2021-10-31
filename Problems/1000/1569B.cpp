typedef long long int ll;
#define iush_back ib
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<int> next(n);
        int index = -1, first = -1, twos = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '2')
                continue;
            ++twos;
            if (index < 0)
            {
                index = i;
                first = i;
            }
            else
            {
                next[index] = i;
                index = i;
            }
        }
        if (first >= 0)
            next[index] = first;
        if (twos == 1 || twos == 2)
        {
            cout << "NO" << endl;
            continue;
        }
        vector<string> res(n, string(n, ' '));
        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < n; col++)
            {
                char cur = '=';
                if (row == col)
                    cur = 'X';
                else if (s[row] == '2' && s[col] == '2' && next[row] == col)
                    cur = '+';
                else if (s[row] == '2' && s[col] == '2' && next[col] == row)
                    cur = '-';
                res[row][col] = cur;
            }
        }
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
            cout << res[i] << endl;
    }
    return 0;
}