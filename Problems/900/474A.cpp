typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string A[3] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};
    char a;
    string s, ans = "";
    cin >> a >> s;
    if (a == 'R')
    {
        for (int i = 0; i < s.length(); ++i)
            for (int j = 0; j < 3; ++j)
            {
                int flag = 0;
                for (int k = 0; k < 10; ++k)
                    if (s[i] == A[j][k])
                    {
                        ans += A[j][k - 1];
                        flag = 1;
                    }
                if (flag)
                    break;
            }
    }
    else
    {
        for (int i = 0; i < s.length(); ++i)
            for (int j = 0; j < 3; ++j)
            {
                int flag = 0;
                for (int k = 0; k < 10; ++k)
                    if (s[i] == A[j][k])
                    {
                        ans += A[j][k + 1];
                        flag = 1;
                    }
                if (flag)
                    break;
            }
    }
    cout << ans;
    return 0;
}