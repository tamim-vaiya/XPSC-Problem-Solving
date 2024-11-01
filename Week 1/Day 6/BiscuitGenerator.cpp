#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, t; cin >> a >> b >> t;

    int ans = 0, n = a;
    while(a <= t + .5)
    {
        a += n;
        ans += b;
    }
    cout << ans << endl;

    return 0;
}