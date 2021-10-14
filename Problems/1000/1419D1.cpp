typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    cout << (n % 2 ? n / 2 : n / 2 - 1) << endl;
    sort(a, a + n);
    int j = n / 2;
    bool bit = true;
    for (int i = 0; i < n / 2;)
    {
        if (bit)
        {
            cout << a[j] << " ";
            j++;
            bit = !bit;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            bit = !bit;
        }
    }
    for (; j < n; j++)
        cout << a[j] << " ";
    return 0;
}