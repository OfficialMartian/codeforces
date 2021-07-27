#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num1, num2, sum = "";
    cin >> num1 >> num2;
    for (int i = 0; i < num1.length(); ++i)
    {
        if (num1[i] != num2[i])
            sum += "1";
        else
            sum += "0";
    }
    cout << sum;
    return 0;
}