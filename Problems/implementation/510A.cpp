#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int prev = -3;
    for (int i = 0; i < n; ++i)
    {
        if (!(i % 2))
            for (int j = 0; j < m; ++j)
                cout << "#";
        else
        {
            if (prev + 4 == i)
            {
                for (int j = 1; j < m; ++j)
                    cout << ".";
                cout << "#";
                prev = i;
            }
            else
            {
                cout << "#";
                for (int j = 1; j < m; ++j)
                    cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}