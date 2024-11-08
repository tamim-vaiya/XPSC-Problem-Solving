#include <bits/stdc++.h>
#include <set>
using namespace std;

#define nl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        for (int i = 0; i < 5; i++)
        {
            st.insert(s[i]);
        }
        
        if (n != 5 || st.size()!=5)
            cout << "NO" << nl;
        else
        {
            int count = 0;
            string a = "Timur";
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    if (a[i] == s[j])
                        count++;
                }
            }
            if (count == 5)
                cout << "YES" << nl;
            else
                cout << "NO" << nl;
        }
    }

    return 0;
}