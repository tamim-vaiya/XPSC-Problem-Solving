#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c; cin >> a >> b >> c;

    int ans = c;

    while(ans <= b)
    {
        if(ans >= a && ans <= b)
        {
            cout << ans << endl;
            return 0;
        }
        ans += c;
    }

    cout << -1 << endl;

    return 0;
}