#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define ll long long

ll fact(int n)
{
    if (n == 1) return 1;
    return n * fact(n-1);
}

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--)
    {
        ll n, k; cin >> n >> k;
        vector<ll> v;
        v.push_back(1);
        if (n > 2 || ((n ==1 || n==2) && (k % 3 == 0) )) v.push_back(3);
        if (k == 5) v.push_back(5);
        if (n > 2 || (n <= 2 && k == 7)) v.push_back(7);    
        if (n > 5 || (n <= 5 && (k * fact(n)) % 9 == 0)) v.push_back(9);
        for(auto &i : v) cout << i << " ";
        cout << nl;
    }

    return 0;
}