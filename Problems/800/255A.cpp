typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int chest = 0, biceps = 0, back = 0, n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (i % 3 == 0)
            chest += temp;
        else if (i % 3 == 1)
            biceps += temp;
        else
            back += temp;
    }
    if (chest > biceps && chest > back)
        cout << "chest" << endl;
    else if (biceps > chest && biceps > back)
        cout << "biceps" << endl;
    else if (back > chest && back > biceps)
        cout << "back" << endl;
    return 0;
}