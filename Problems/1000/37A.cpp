typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, maxCount = 0;
    cin >> n;
    map<int, int> a;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        a[temp]++;
    }
    for (auto it = a.begin(); it != a.end(); ++it)
        if (it->second > maxCount)
            maxCount = it->second;
    cout << maxCount << " " << a.size();
    return 0;
}