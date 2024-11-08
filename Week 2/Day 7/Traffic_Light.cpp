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
        char ch; cin >> ch;
        string s; cin >> s;
        s += s;
        int mxi = 0, cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == ch)
            {
                cnt = 0;
                while(s[i] != 'g' && i < s.size())
                {
                    cnt++;
                    i++;
                }
                if(cnt > mxi) mxi = cnt;
            }
        }
        cout << mxi << nl;
    }

    return 0;
}