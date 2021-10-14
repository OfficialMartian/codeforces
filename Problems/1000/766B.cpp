typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.pb(temp);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size() - 2; i++)
    {
        int d, b, c;
        d = a[i];
        b = a[i + 1];
        c = a[i + 2];
        if (d + b > c)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}