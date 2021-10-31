typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int mini = min(a, b), ans = 1;
    for (int i = 1; i <= mini; i++)
    {
        ans *= i;
    }
    cout << ans << endl;
    return 0;
}