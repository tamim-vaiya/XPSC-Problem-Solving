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
        int n; cin >> n;
        map<int,int> cnt;
        for (int i = 1; i <= n; i++)
        {
            int x; cin>>x;
            cnt[x]++;
        }

        priority_queue<int> pq;
        for(auto [x,y] : cnt)
        {
            pq.push(y);
        }

        while(!pq.empty()) 
        {
            if(pq.size() < 2) break;
            int x,y;
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();
        x--, y--;
        if(x >= 1) {
            pq.push(x);
        }
        if(y >= 1)
        {
            pq.push(y);
        }
        }
        int ans = 0;
        while(!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << nl;
    }

    return 0;
}