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
        ll n;
        cin >> n;
        if (n < 4)
            cout << 1 << nl;
        else
        {
            ll x = 0;
            while (n > 0)
            {
                n = floor(n / 4);
                x++;
            }
            cout << (1 << (x - 1)) << nl;
        }
    }

    return 0;
}