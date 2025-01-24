#include <bits/stdc++.h>
#include <set>
using namespace std;

#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str;

        set<char> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(str[i]);
        }

        vector<int> ans(26, INT_MAX);
        for (auto &a : st)
        {
            int low = 0;
            int high = n - 1;
            int c = 0;
            while (low < high)
            {
                if (str[low] == str[high])
                {
                    low++;
                    high--;
                }
                else
                {
                    if (str[low] == a)
                    {
                        low++;
                        c++;
                    }
                    else if (str[high] == a)
                    {
                        high--;
                        c++;
                    }
                    else
                    {
                        c = -1;
                        break;
                    }
                }
            }
            if (c != -1)
                ans[a - 'a'] = c;
        }
        sort(ans.begin(), ans.end());

        if (ans[0] == INT_MAX)
            cout << "-1" << nl;
        else
            cout << ans[0] << nl;
    }

    return 0;
}