typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2)
        cout << -1 << endl;
    else
    {
        cout << "2 1";
        for (int i = 3; i < n; i += 2)
            cout << " " << i + 1 << " " << i;
    }
    return 0;
}