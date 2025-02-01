#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--)
    {
        int n;
    cin >> n;
    vector<int> v(n);
    int x = 0, y = 0;
    for (auto &vl : v)
    {
        cin >> vl;
        if (vl) x++;
        else y++;
    }
    cout << min(x, y) << nl;
    }

    return 0;
}