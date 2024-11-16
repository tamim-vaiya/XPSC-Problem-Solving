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
        int x, y; cin >> x >> y;
        ((x % 3) == (y % 3)) ? cout << x % 3 << nl : cout << 0 << nl;
    }

    return 0;
}