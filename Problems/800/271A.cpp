#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int near = 0;
    cin >> n;
    while (n)
    {
        int dig = n % 10;
        if (dig == 4 || dig == 7)
            near++;
        n /= 10;
    }
    if (near == 4 || near == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}