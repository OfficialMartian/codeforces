typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, i;
    cin >> a >> b;
    i = a > b ? b : a;
    i % 2 ? cout << "Akshat" : cout << "Malvika";
    return 0;
}