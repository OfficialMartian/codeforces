typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> A;
    for (int i = 0; i < s.length() - 1; ++i)
    {
        string temp = "";
        temp += s[i];
        temp += s[i + 1];
        A[temp]++;
    }
    int max = 0;
    string ans;
    for (auto it = A.begin(); it != A.end(); ++it)
        if (it->second > max)
        {
            max = it->second;
            ans = it->first;
        }
    cout << ans;
    return 0;
}