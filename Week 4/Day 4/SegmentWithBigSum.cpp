#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll s; 
    cin >> n >> s;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    ll x = 0;

    int l = 0, r = 0, result = INT_MAX;

    while(r < n)
    {
        x += a[r];
        while(x - a[l] >= s)
        {
            x -= a[l];
            l++;
        }

        if(x >= s)
        {
            result = min(result, r - l + 1);
        }

        r++;
    }

    (result != INT_MAX) ? cout << result << nl : cout << -1 << nl;
    

    return 0;
}