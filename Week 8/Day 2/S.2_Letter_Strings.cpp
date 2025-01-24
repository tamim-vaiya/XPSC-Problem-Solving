#include <bits/stdc++.h>
#include <map>
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

        map<char, ll> fo, lo;
        map<string, ll> mp;
        vector<string> s(n);

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            fo[s[i][0]]++;
            lo[s[i][1]]++;
            mp[s[i]]++;
        }

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += (fo[s[i][0]] + lo[s[i][1]] - 2 * mp[s[i]]);
            fo[s[i][0]]--;
            lo[s[i][1]]--;
            mp[s[i]]--;
        }

        cout << ans << endl;
    }

    return 0;
}