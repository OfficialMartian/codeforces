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
        map<int, int> a;
        for (int i = 0; i < n; ++i)
        {
            int temp;
            cin >> temp;
            a[temp]++;
        }
        cout << a.size() << endl;
    }
    return 0;
}