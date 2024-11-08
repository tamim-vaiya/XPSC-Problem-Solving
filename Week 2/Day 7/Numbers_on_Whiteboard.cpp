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
        int n; cin >> n;
        cout << 2 << nl;
        int a = n, b = n - 1;
        for (int i = 1; i < n; i++)
        {
            cout << a << " " << b << nl;
            a = (a+b+1)/2;
            b--;
        }
        
    }

    return 0;
}