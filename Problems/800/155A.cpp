#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, points, best, worst, count = 0;
    cin >> n >> points;
    best = points;
    worst = points;
    for (int i = 1; i < n; ++i)
    {
        cin >> points;
        if (points > best)
        {
            best = points;
            count++;
        }
        else if (points < worst)
        {
            worst = points;
            count++;
        }
    }
    cout << count;
    return 0;
}