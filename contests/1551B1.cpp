#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        if (s.length() > 1)
        {
            int one = 0, two = 0;
            map<char, int> alpha;
            map<char, int>::iterator it;

            for (int i = 0; i < s.length(); i++)
                alpha[s[i]]++;
            for (it = alpha.begin(); it != alpha.end(); it++)
                if (it->second == 1)
                    one++;
                else if (it->second >= 2)
                    two++;
            cout << (one / 2) + two << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}