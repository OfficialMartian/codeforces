typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, avail = 0, count = 0;
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;
        if (temp == -1)
        {
            if (avail > 0)
                avail--;
            else
                count++;
        }
        else
            avail += temp;
    }
    cout << count << endl;
    return 0;
}