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
        ll o = 0, z = 0;
        for(auto &x : a)
        {
            cin >> x;
            if(!x) z++;
            if(x == 1) o++;
        }
        cout << (1ll << z) * o << nl;
    }

    return 0;
}