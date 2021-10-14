typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    map<string, string> langs;
    for (int i = 0; i < m; ++i)
    {
        string a, b;
        cin >> a >> b;
        b.length() < a.length() ? langs[a] = b : langs[a] = a;
    }
    for (int i = 0; i < n; ++i)
    {
        string temp;
        cin >> temp;
        temp = langs[temp];
        cout << temp << " ";
    }
    return 0;
}