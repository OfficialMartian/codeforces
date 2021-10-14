typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, total = 0, answer = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int f;
        cin >> f;
        total += f;
    }
    for (int i = 1; i <= 5; ++i)
        if ((total + i) % (n + 1) != 1)
            answer += 1;
    cout << answer << endl;
    return 0;
}