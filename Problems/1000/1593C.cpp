typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> A, int item)
{
    int start = 0, last = A.size() - 1, mid;
    while (start <= last)
    {
        mid = (start + last) / 2;
        if (A[mid] == item)
            return mid;
        else if (A[mid] < item)
            start = mid + 1;
        else
            last = mid - 1;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, cat = 0;
        cin >> n >> k;
        vector<int> a(k);
        for (int i = 0; i < a.size(); i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        while (1)
        {
            if (a.size() == 0 || cat >= a.back())
                break;
            cat += n - a.back();
            a.pop_back();
        }
        cout << k - a.size() << endl;
    }
    return 0;
}