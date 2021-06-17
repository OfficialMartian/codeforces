#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int f(0);
    for (int i = 0; i < a.length(); i++)
    {
        int A = a[i], B = b[i];
        if (A >= 65 && A <= 90)
            A += 32;
        if (B >= 65 && B <= 90)
            B += 32;
        if (A == B)
            continue;
        else
        {
            f = 1;
            if (A > B)
                cout << "1";
            else if (A < B)
                cout << "-1";
            break;
        }
    }
    if (!f)
        cout << "0";
    return 0;
}