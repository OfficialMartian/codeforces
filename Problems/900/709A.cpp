typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, d, waste = 0, count = 0;
    cin >> n >> b >> d;
    while (n--)
    {
        int temp;
        cin >> temp;
        if (temp <= b)
        {
            waste += temp;
            if (waste > d)
            {
                count++;
                waste = 0;
            }
        }
    }
    cout << count;
    return 0;
}