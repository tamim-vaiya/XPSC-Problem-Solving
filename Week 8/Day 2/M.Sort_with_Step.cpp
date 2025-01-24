#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int dm = 0;

        for (int i = 0; i < n; i++)
        {
            if (abs(a[i] - i - 1) % k != 0)
            {
                dm++;
            }
        }

        if (dm == 0)
        {
            cout << 0 << nl;
        }
        else
        {
            if (dm <= 2)
            {
                cout << 1 << nl;
            }
            else
            {
                cout << -1 << nl;
            }
        }
    }

    return 0;
}