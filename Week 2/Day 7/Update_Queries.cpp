#include <bits/stdc++.h>
using namespace std;
#include <set>

#define nl '\n'

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--)
    {
        int n, m; cin >> n >> m;
        string s; cin >> s;
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            int x; cin >> x;
            st.insert(x);
        }
        string up; cin >> up;
        sort(up.begin(), up.end());
        int idx = 0;
        for(auto it : st)
        {
            s[it-1] = up[idx];
            idx++;
        }
        cout << s << nl;
    }

    return 0;
}