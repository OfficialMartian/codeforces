#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, k;
    cin >> num >> k;
    while (k--)
    {
        int dig = num % 10;
        if (dig == 0)
            num /= 10;
        else
            --num;
    }
    cout << num;
    return 0;
}