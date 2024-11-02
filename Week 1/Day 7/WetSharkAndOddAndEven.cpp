#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
using ll = long long;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    ll ans = 0;
    vector<ll> odd;

    int n; cin>> n;
    if(n == 1) 
    {
        ll x; cin >> x;
        if(x % 2 == 0) ans = x;
        else ans = 0; 
        cout << ans << nl;
        return 0;
    } 
    
    while(n--)
    {
        ll x; cin >> x;
        if(x % 2 == 0) ans += x;
        else odd.push_back(x);
    }

    sort(odd.begin(),odd.end(),greater<ll>());

    int sz = odd.size();

    if(sz % 2 == 0)
    {
        for (int i = 0; i < sz; i++)
        {
            ans += odd[i];
        }
    } else {
        for (int i = 0; i < sz - 1; i++)
        {
            ans += odd[i];
        }
    }
    
    cout << ans << nl;

    return 0;
}