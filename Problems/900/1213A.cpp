typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, even = 0, odd = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        temp % 2 ? odd++ : even++;
    }
    odd < even ? cout << odd : cout << even;
    return 0;
}