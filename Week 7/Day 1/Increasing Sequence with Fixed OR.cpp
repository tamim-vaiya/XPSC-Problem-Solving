#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>

#define ll long long int
#define nl cout << endl
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        deque<ll> res;
        for (ll i = 0; i <= log2(n); i++)
        {
            if ((n >> i) & 1)
            {
                ll val = n - (1LL << i);
                if (val > 0)
                {
                    res.push_front(val);
                }
            }
        }
        res.push_back(n);

        cout << res.size() << endl;
        for (ll v : res)
        {
            cout << v << ' ';
        }
        nl;
    }
    return 0;
}