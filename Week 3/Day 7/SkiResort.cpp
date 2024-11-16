#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        ll ans = 0, cons = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] <= q)
            {
                cons++;
                if (i == n - 1 || v[i + 1] > q)
                {
                    if (cons >= k)
                    {
                        ll x = cons - k + 1;
                        ans += (x * (x + 1)) / 2;
                    }
                    cons = 0;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}