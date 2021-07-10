#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ax, ay, bx, by, fx, fy, dist = 0;
        cin >> ax >> ay >> bx >> by >> fx >> fy;
        dist = abs(ax - bx) + abs(ay - by);
        if (ax == bx && fx == ax)
            if (fy > ay && fy < by)
                dist += 2;
            else if (fy < ay && fy > by)
                dist += 2;
        if (ay == by && fy == ay)
            if (fx > ax && fx < bx)
                dist += 2;
            else if (fx < ax && fx > bx)
                dist += 2;
        cout << dist << endl;
    }

    return 0;
}