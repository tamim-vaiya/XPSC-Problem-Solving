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
        int minCnt = INT_MAX, cnt = 0;
        int l = 0, r = 0;
        while(r < n)
        {
            if(s[r] == 'W') cnt++;
            if(r - l + 1 == k)
            {
                minCnt = min(minCnt, cnt);
                if(s[l] == 'W')
                {
                    cnt--;
                }
                l++;
            }
            r++;
        }
        cout << minCnt << nl;
    }

    return 0;
}