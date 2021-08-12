typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll bills = 0, n;
    cin >> n;
    int A[] = {100, 20, 10, 5, 1};
    for (int i = 0; i < 5; ++i)
    {
        bills += n / A[i];
        n %= A[i];
    }
    cout << bills << endl;
    return 0;
}