typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int flag = 1;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            if (flag == 0)
                cout << " ";
            i += 2;
            continue;
        }
        else
        {
            flag = 0;
            cout << s[i];
        }
    }
    return 0;
}