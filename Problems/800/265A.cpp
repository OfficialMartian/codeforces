typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, a;
    int pos = 1, index = 0;
    cin >> s >> a;
    for (int i = 0; i < a.size(); ++i)
    {
        if (a[i] == s[index])
        {
            pos++;
            index++;
        }
    }
    cout << pos;
    return 0;
}