typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    printf("%.0llf", (n % 2 ? 0 : pow(2, n / 2)));
    return 0;
}