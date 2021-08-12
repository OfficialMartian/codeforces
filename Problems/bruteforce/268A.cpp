#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    vector<int> h, g;
    for (int i = 0; i < n; ++i)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        h.pb(temp1);
        g.pb(temp2);
    }
    for (int i = 0; i < h.size(); ++i)
        for (int j = 0; j < g.size(); ++j)
            if (i != j && h[i] == g[j])
                count++;
    cout << count << endl;
    return 0;
}