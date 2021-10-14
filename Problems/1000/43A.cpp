typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    string a, winner;
    while (n--)
    {
        if (count == 0)
        {
            cin >> winner;
            count++;
        }
        else
        {
            cin >> a;
            a == winner ? count++ : count--;
        }
    }
    cout << winner;
    return 0;
}