typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool flag = false;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
            flag = true;
    }
    cout << (flag ? -1 : 1) << nl;
    return 0;
}