typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, nextPrime = 0;
    cin >> n >> m;
    int flag = 0;
    for (int p = n + 1; p <= m; p++)
    {
        int counter = 0;
        for (int i = 2; i <= (p / 2) + 1; i++)
            if (p % i == 0)
                counter++;
        if (counter == 0)
        {
            if (p == m)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            flag = 1;
            break;
        }
    }
    if (!flag)
        cout << "NO" << endl;
    return 0;
}