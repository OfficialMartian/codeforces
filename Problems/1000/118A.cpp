typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    s.erase(remove(s.begin(), s.end(), 'A'), s.end());
    s.erase(remove(s.begin(), s.end(), 'E'), s.end());
    s.erase(remove(s.begin(), s.end(), 'I'), s.end());
    s.erase(remove(s.begin(), s.end(), 'O'), s.end());
    s.erase(remove(s.begin(), s.end(), 'U'), s.end());
    s.erase(remove(s.begin(), s.end(), 'Y'), s.end());
    s.erase(remove(s.begin(), s.end(), 'a'), s.end());
    s.erase(remove(s.begin(), s.end(), 'e'), s.end());
    s.erase(remove(s.begin(), s.end(), 'i'), s.end());
    s.erase(remove(s.begin(), s.end(), 'o'), s.end());
    s.erase(remove(s.begin(), s.end(), 'u'), s.end());
    s.erase(remove(s.begin(), s.end(), 'y'), s.end());
    for (int i = 0; i < s.length(); ++i)
        if (s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
    for (int i = 0; i < s.length(); ++i)
        cout << '.' << s[i];
    return 0;
}