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
        int a, b, c; cin >> a >> b >> c;
        cout << 1000 / (2 * (a * b + a * c + b * c)) << nl;
    }

    return 0;
}