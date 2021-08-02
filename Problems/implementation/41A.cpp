#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c = "";
    cin >> a;
    for (int i = a.size() - 1; i >= 0; --i)
        c += a[i];
    cin >> b;
    if (c == b)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}