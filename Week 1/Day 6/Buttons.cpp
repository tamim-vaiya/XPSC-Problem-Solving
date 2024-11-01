#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; cin >> a >> b;
    int ans = 0;
    if(a == b)
    {
        ans = a + b;
    } else if (a > b)
    {
        ans = a + a -1;
    } else {
        ans = b + b - 1;
    }
    cout << ans << endl;

    return 0;
}