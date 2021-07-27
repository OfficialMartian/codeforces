#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string final = "";
    cin >> n;
    for (int i = 1; i <= n; i += 2)
    {
        if (i == n)
        {
            final += "I hate ";
            break;
        }
        else if (i + 1 == n)
        {
            final += "I hate that I love ";
            break;
        }
        else
            final += "I hate that I love that ";
    }
    cout << final + "it";
    return 0;
}