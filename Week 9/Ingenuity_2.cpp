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
        string s;
        cin >> s;
        map<char, int> mp;
        for (auto ch : s)
        {
            mp[ch]++;
        }
        if ((n == 2 && s[0] != s[1]) || (n % 2))
        {
            cout << "NO" << nl;
            continue;
        }
        int h = mp['N'] + mp['S'], v = mp['W'] + mp['E'];
        if (v & 1 || h & 1)
        {
            cout << "NO" << nl;
            continue;
        }
        string ans;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'N' || s[i] == 'S')
            {
                if (mp[s[i]] % 2)
                    ans.push_back('H');
                else
                    ans.push_back('R');
                mp[s[i]]--;
            }
            else
            {
                if (mp[s[i]] % 2)
                {
                    ans.push_back('R');
                }
                else
                    ans.push_back('H');
                mp[s[i]]--;
            }
        }
        cout << ans << nl;
    }
    return 0;
}


