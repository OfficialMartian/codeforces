typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a[8];
    int black = 0, white = 0;
    for (int i = 0; i < 8; ++i)
    {
        cin >> a[i];
        for (int j = 0; j < a[i].size(); ++j)
        {
            switch (a[i][j])
            {
            case 'Q':
                white += 9;
                break;
            case 'R':
                white += 5;
                break;
            case 'B':
            case 'N':
                white += 3;
                break;
            case 'P':
                white++;
                break;
            case 'q':
                black += 9;
                break;
            case 'r':
                black += 5;
                break;
            case 'b':
            case 'n':
                black += 3;
                break;
            case 'p':
                black++;
                break;
            }
        }
    }
    if (black == white)
        cout << "Draw";
    else if (black > white)
        cout << "Black";
    else
        cout << "White";

    return 0;
}