typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    cout << (a == b ? -1 : max(a.length(), b.length()));
    return 0;
}