#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    int ans = m - n + 1;
    ans > 0 ? cout << ans << '\n' : cout << 0 << '\n';

    return 0;
}