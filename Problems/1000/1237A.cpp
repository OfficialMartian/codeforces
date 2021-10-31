typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int diff = 0;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2 && diff >= 0)
        {
            --temp;
            --diff;
        }
        else if (temp % 2 && diff < 0)
        {
            ++temp;
            ++diff;
        }
        cout << temp / 2 << nl;
    }
    return 0;
}