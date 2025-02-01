#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q, ans = 0, x = 0, y = 0, z = 0;
    cin >> n >> a >> b >> p >> q;
    for (ll i = a; i <= n; i += a)
    {
        x++;
    }
    for (ll i = b; i <= n; i += b)
        y++;
    ll lcm = (a * b) / (__gcd(a, b));
    for (ll i = lcm; i <= n; i += lcm)
        z++;
    cerr << x << " " << y << " " << z << nl;
    x -= z, y -= z;
    ans += (p * x) + (q * y) + (z * max(p, q));
    cout << ans << nl;

    return 0;
}