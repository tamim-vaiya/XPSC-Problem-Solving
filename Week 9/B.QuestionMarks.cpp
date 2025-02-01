#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;

#define ll long long
#define nl '\n'

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--)
    {
        int n; cin >> n;
        string s; cin >> s;

        set<char> st;
        ll ans = 0;

        map<char, int> mp;

        for(auto ch : s)
        {
            mp[ch]++;
        }

        for (char i = 'A'; i <= 'D'; i++)
        {
            ans += min(mp[i], n);
        }
        cout << ans << nl;
        
    }

    return 0;
}