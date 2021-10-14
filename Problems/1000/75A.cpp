typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll a, b, c;
    cin >> a >> b;
    c = a + b;
    string C = to_string(c);
    string A = to_string(a);
    string B = to_string(b);
    A.erase(remove(A.begin(), A.end(), '0'), A.end());
    B.erase(remove(B.begin(), B.end(), '0'), B.end());
    C.erase(remove(C.begin(), C.end(), '0'), C.end());
    a = stoll(A);
    b = stoll(B);
    c = stoll(C);
    cout << (a + b == c ? "YES" : "NO");
    return 0;
}