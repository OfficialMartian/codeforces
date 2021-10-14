typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool flag = false;
    cin >> n;
    int a[14] = {4, 7, 47, 77, 74, 44, 444, 447, 474, 744, 477, 777, 774, 747};
    for (int i = 0; i < 14; ++i)
    {
        if (n % a[i] == 0)
        {
            flag = true;
            break;
        }
    }
    cout << (flag ? "YES" : "NO");
    return 0;
}