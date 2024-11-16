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
        int n, k; cin >> n >> k;
        string s; cin >> s;
        int cnt = 0, i = 0;
        while(i < n)
        {
            if(s[i] == 'B')
            {
                i = min(i+k, n);
                cnt++;
            } else {
                i++;
            }
        }
        cout << cnt << nl;
    }

    return 0;
}