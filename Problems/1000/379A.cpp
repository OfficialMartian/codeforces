typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    if (b > a)
        cout << a << endl;
    else
    {
        while (a > 0)
        {
            if (a >= b)
            {
                a = a - b + 1;
                count += b;
            }
            else
            {
                count += a;
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}