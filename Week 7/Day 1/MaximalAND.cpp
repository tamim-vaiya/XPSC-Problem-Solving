#include <bits/stdc++.h>


#define nl cout << endl
using namespace std;

const int sz = 30;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, op;
    cin >> n >> op;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> bin(sz + 1);
    for (int i = 0; i < n; i++)
    {
        for (int k = sz; k >= 0; k--)
        {
            if ((v[i] >> k) & 1)
            {
                bin[k]++;
            }
        }
    }

    int ans = 0;

    for (int k = sz; k >= 0; k--)
    {
        if (bin[k] == n)
        {
            ans += (1LL << k);
        }
        else
        {
            int need = n - bin[k];
            if (op >= need)
            {
                ans += (1LL << k);
                op -= need;
            }
        }
    }

    cout << ans << endl;
    }
    return 0;
}