typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
ll nextprime(ll a)
{
    while (true)
    {
        int temp = 0;
        for (int i = 2; i < a; ++i)
            if (a % i == 0)
            {
                temp = 1;
                break;
            }
        if (temp == 0)
            break;
        else
            a++;
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        ll a = d + 1;
        a = nextprime(a);
        ll b = a + d;
        b = nextprime(b);
        cout << a * b << endl;
    }
    return 0;
}