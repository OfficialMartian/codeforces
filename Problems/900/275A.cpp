typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tab[3][3];
    bool result[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            result[i][j] = true;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> tab[i][j];
    if (tab[0][0] % 2)
    {
        result[0][0] = !result[0][0];
        result[1][0] = !result[1][0];
        result[0][1] = !result[0][1];
    }
    if (tab[1][0] % 2)
    {
        result[0][0] = !result[0][0];
        result[1][0] = !result[1][0];
        result[2][0] = !result[2][0];
        result[1][1] = !result[1][1];
    }
    if (tab[2][0] % 2)
    {
        result[2][0] = !result[2][0];
        result[2][1] = !result[2][1];
        result[1][0] = !result[1][0];
    }
    if (tab[0][1] % 2)
    {
        result[0][0] = !result[0][0];
        result[0][1] = !result[0][1];
        result[1][1] = !result[1][1];
        result[0][2] = !result[0][2];
    }
    if (tab[1][1] % 2)
    {
        result[1][1] = !result[1][1];
        result[0][1] = !result[0][1];
        result[2][1] = !result[2][1];
        result[1][0] = !result[1][0];
        result[1][2] = !result[1][2];
    }
    if (tab[2][1] % 2)
    {
        result[1][1] = !result[1][1];
        result[2][0] = !result[2][0];
        result[2][1] = !result[2][1];
        result[2][2] = !result[2][2];
    }
    if (tab[0][2] % 2)
    {
        result[0][1] = !result[0][1];
        result[0][2] = !result[0][2];
        result[1][2] = !result[1][2];
    }
    if (tab[1][2] % 2)
    {
        result[0][2] = !result[0][2];
        result[1][1] = !result[1][1];
        result[1][2] = !result[1][2];
        result[2][2] = !result[2][2];
    }
    if (tab[2][2] % 2)
    {
        result[2][2] = !result[2][2];
        result[2][1] = !result[2][1];
        result[1][2] = !result[1][2];
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << result[i][j] ? 1 : 0;
        cout << '\n';
    }
    return 0;
}