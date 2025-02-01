#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);
        for (auto &vl : a)
            cin >> vl;
        for (auto &vl : b)
            cin >> vl;
        for (int i = 0; i < n; i++)
        {
            c[i] = b[i] - a[i];
        }
        sort(c.begin(), c.end());
        for (auto vl : c)
            cerr << vl << " ";
        cerr << nl;
        int cnt = 0;
        if (c[0] >= 0)
        {
            cout << n / 2 << nl;
            return;
        }
        int l = 0, r = n - 1;
        while (l < r)
        {
            while (l < r && abs(c[l]) > c[r])
                l++;
            if (l < r && abs(c[l]) <= c[r])
                cnt++;
            l++, r--;
        }
        cout << cnt << nl;
    }

    return 0;
}