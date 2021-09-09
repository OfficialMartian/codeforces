#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, i = 1;
        cin >> n;
        count = (n % 10 - 1) * 10;
        while (n)
        {
            count += i;
            n /= 10;
            i++;
        }
        cout << count << endl;
    }
    return 0;
}