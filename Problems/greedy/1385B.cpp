typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp;
        vector<int> V;
        map<int, int> a;
        cin >> n;
        for (int i = 0; i < 2 * n; ++i)
        {
            cin >> temp;
            if (a[temp] == 0)
            {
                a[temp]++;
                V.pb(temp);
            }
        }
        for (int i = 0; i < V.size(); ++i)
            cout << V[i] << " ";
        cout << endl;
    }
    return 0;
}