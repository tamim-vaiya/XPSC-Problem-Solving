#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        string s, ns; cin >> s;
        int low = 0, cap = 0;
        reverse(s.begin(),s.end());
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'b') low++; 
            if(s[i] == 'B') cap++;

            if(s[i] != 'b' && s[i] != 'B')
            {
                if(low > 0 && islower(s[i])) 
                {
                    low--;
                    continue;
                }
                if(cap > 0 && isupper(s[i])) 
                {
                    cap--;
                    continue;
                }
                ns.push_back(s[i]);
            }
            
        }

        if(ns.empty()) cout << ' ' << '\n';
        else {
            reverse(ns.begin(),ns.end());
            cout << ns << '\n';
        }
        
    }



    return 0;
}