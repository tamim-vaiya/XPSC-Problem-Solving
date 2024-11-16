#include <bits/stdc++.h>
using namespace std;

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
        int l = 0, r = n - 1, ans = n;
        while(l <= r)
        {
            if(s[l] == s[r])
            {
                break;
            } else {
                ans -= 2;
                l++, r--;
            } 
        }
        cout << ans << nl;
    }

    return 0;
}