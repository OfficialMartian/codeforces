typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> prog, math, pe;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        if (temp == 1)
            prog.pb(i + 1);
        else if (temp == 2)
            math.pb(i + 1);
        else
            pe.pb(i + 1);
    }
    int mini = min(min(prog.size(), math.size()), pe.size());
    if (mini == 0)
        cout << 0 << endl;
    else
    {
        cout << mini << endl;
        for (int i = 0; i < mini; ++i)
            cout << prog[i] << " " << math[i] << " " << pe[i] << endl;
        cout << endl;
    }
    return 0;
}