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
        int a, b, c; cin >> a >> b >> c;

        int l1 = abs(a - 1);
        int l2 = abs(c - b) + abs(c - 1);

        if(l1 > l2) cout << 2 << nl;
        else if(l1 < l2) cout << 1 << nl;
        else cout << 3 << nl;
    }

    return 0;
}