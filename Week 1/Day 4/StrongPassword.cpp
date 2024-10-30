#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    string s;
    while(t--)
    {
        cin >> s;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            if(i == n - 1)
            {
                if(s[i] == 'a') s.append("w");
                else s.append("a");
                break;
            }
            if(s[i] == s[i+1])
            {
                if(s[i] == 'a') s.insert(i + 1, "b");
                else s.insert(i + 1, "a");
                break;
            }
        }
        cout << s << '\n';
        
    }

    return 0;
}