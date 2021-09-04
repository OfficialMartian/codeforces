typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int flag = 1, count = 0;
    for (int i = 0; i < a.length(); ++i)
        if (a[i] == '4' && (count == 1 || count == 2))
            count++;
        else if (a[i] == '1')
            count = 1;
        else
            flag = 0;
    cout << (flag ? "YES" : "NO");
    return 0;
}