#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long 

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int l = 0, r = 0;
    ll sum = 0, ans = 0;
    while(r < n)
    {
        sum += a[r];
        if(sum <= k)
        {
            ans += (r - l + 1);
        } else {
            while( sum > k && l <= r)
            {
                sum -= a[l];
                l++;
            }
            if(sum <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }

    cout << ans << nl;

    return 0;
}