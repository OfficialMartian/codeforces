typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, temp = 0, count = 0;
    cin >> k;
    int A[12];
    for (int i = 0; i < 12; ++i)
        cin >> A[i];
    sort(A, A + 12);
    for (int i = 11; i >= 0; --i)
    {
        temp += A[i];
        count++;
        if (temp >= k)
            break;
    }
    if (!k)
        cout << "0";
    else if (temp >= k)
        cout << count;
    else
        cout << "-1";
    return 0;
}