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
        int n;
    cin >> n;
    ll ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ((ans % 1000000007) * (i % 1000000007)) % 1000000007;
    }
    cout << ans << nl;

    }

    return 0;
}