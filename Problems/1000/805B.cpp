typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, j = 0;
    cin >> n;
    char s[] = {'b', 'a', 'a', 'b'};
    for (int i = 0; i < n; i++)
    {
        cout << s[j];
        j++;
        if (j == 4)
            j = 0;
    }
    cout << nl;
    return 0;
}