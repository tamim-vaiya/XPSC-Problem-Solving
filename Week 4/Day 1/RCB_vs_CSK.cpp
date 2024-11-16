#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int r, c; cin >> r >> c;
    (r - c) >= 18 ? cout << "RCB" << nl: cout << "CSK" << nl;

    return 0;
}