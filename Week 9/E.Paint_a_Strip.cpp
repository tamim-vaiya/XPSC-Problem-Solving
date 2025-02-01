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
        int n; cin >> n;
        if(n == 1)
        {
            cout << 1 << nl;
        }
        else if(n == 2 || n == 3 || n == 4)
        {
            cout << 2 << nl;
        }
        else 
        {
            ll sum = 4, ans = 2;
            while(sum < n)
            {
                ans++;
                sum++;
                sum*=2;
            }
            cout << ans << nl;
        }
    }

    return 0;
}