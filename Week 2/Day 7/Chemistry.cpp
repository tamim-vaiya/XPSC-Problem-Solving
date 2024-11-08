#include <bits/stdc++.h>
#include <map>
using namespace std;

#define nl '\n'

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--)
    {
        int n,k; cin >> n >> k;
        string s; cin >> s;
        map<char,int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int cnt = 0;
        for(auto ch : mp)
        {
            if(ch.second % 2 != 0) cnt++;
        }

        if((cnt-1) < 0) cnt = 0;
        else cnt = cnt - 1;

        if(k >= cnt && k <= n) cout << "YES" << nl;
        else cout << "NO" << nl;
        
    }

    return 0;
}