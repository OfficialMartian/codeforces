typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = n / 2;
    cout << count << endl;
    if (n % 2)
    {
        while (--count)
            cout << "2 ";
        cout << 3;
    }
    else
    {
        while (count--)
            cout << "2 ";
    }
    return 0;
}