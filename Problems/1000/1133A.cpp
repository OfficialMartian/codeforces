typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h1, m1, h2, m2;
    char a;
    cin >> h1 >> a >> m1 >> h2 >> a >> m2;
    int min = (((h2 - h1) * 60) + (m2 - m1)) / 2;
    int x = h1 + (min / 60);
    int y = m1 + (min % 60);
    if (y > 59)
    {
        x += y / 60;
        y = y % 60;
    }
    printf("%02d:%02d\n", x, y);
    return 0;
}