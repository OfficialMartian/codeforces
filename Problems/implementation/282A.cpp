#include <iostream>
using namespace std;
int main()
{
    int n, k = 0;
    string a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a.find("++") != string::npos)
            k++;
        else if (a.find("--") != string::npos)
            k--;
    }
    cout << k << endl;
    return 0;
}