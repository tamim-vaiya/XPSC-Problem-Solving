#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--)
    {
        ll n; cin >> n;
        vector<ll> a(n);
        ll ans = 0;
        for(ll &x : a) cin >> x;
        for(ll i = n - 2; i >= 0; i--)
        {
            ll cnt = 0;
            if(!a[i + 1])
            {
                cout << -1 << nl;
                continue;
            }
            while(a[i] >= a[i + 1])
            {
                a[i] /= 2;
                cnt++;
            }
            ans += cnt;
        }
        cout << ans << nl;
    }

    return 0;
}