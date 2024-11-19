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
        int a, b, n, s; cin >> a >> b >> n >> s;
        int mxA = min(a, s/n) * n;
        int bC = s - mxA;

        (bC <= b) ? cout << "YES" << nl : cout << "NO" << nl;

    }

    return 0;
}