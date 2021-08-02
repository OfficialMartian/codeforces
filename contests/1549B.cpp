#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        string a, b;
        cin >> n >> a >> b;
        for (int i = 0; i < b.size(); ++i)
        {
            if (b[i] == '1')
            {
                if (a[i] == '0')
                {
                    a[i] == '2';
                    count++;
                }
                else
                {
                    if (a[i - 1] == '1')
                    {
                        a[i - 1] = '2';
                        count++;
                    }
                    else if (a[i + 1] == '1')
                    {
                        a[i + 1] = '2';
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}