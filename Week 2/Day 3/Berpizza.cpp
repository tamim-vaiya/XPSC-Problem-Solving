#include <bits/stdc++.h>
#include <set>
using namespace std;

#define nl '\n'

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int n, customerNo = 1;
    cin >> n;
    set<pair<int,int>> s;
    multiset<pair<int,int>> ml;
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        int t; cin >> t;
        if(t == 1)
        {
            int money; cin >> money;
            s.insert({customerNo,money});
            ml.insert({money, -customerNo});
            customerNo++;
        }
        else if(t == 2)
        {
            int pos = s.begin()->first, money = s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ml.erase({money,-pos});
        }
        else {
            int pos = -ml.rbegin()->second, money = ml.rbegin()->first;
            ans.push_back(pos);
            ml.erase(--ml.end());
            s.erase({pos,money});
        }
    }

    for(auto value : ans)
    {
        cout << value << " ";
    }
    cout << nl;
    

    return 0;
}