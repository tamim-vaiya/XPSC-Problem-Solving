#include <bits/stdc++.h>
#include <map>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m; cin >> n >> m;
    map<int, string> mp1;
    vector<string> v(n+1);
    map<string,string> mp2;

    for (int i = 1 ; i <= n; i++)
    {
        string server, ip1; cin >> server >> ip1;
        v[i] = server;
        mp1[i] = ip1;
    }
    for (int i = 1; i <= m; i++)
    {
        string command, ip2; cin >> command >> ip2;
        mp2[command] = ip2;
        ip2.pop_back();
        for (int i = 1; i <= n; i++)
        {
           if(ip2 == mp1[i])
           {
                cout << command << " " << mp2[command] << " #" << v[i] << '\n';
           }
        }
        
    }

    return 0;
}


// Another Approch
// #include <bits/stdc++.h>
// #define nl '\n'
// #define ll long long int
// #define input(v) for(auto &data : v) cin >> data
// #define print(v) for(auto data : v) cout << data << " "; cout << nl
// #define FAJR_BOOST() ios_base::sync_with_stdio(false); cin.tie(NULL);
// using namespace std;

// int main()
// {
//     FAJR_BOOST()

//     map<string, string> mp;
//     int n, m; cin >> n >> m;
//     while (n--)
//     {
//         string s1, s2; cin >> s1 >> s2;
//         mp[s2] = s1;
//     }
//     while (m--)
//     {
//         string s1, s2; cin >> s1 >> s2;
//         s2.pop_back();
//         cout << s1 << " " << s2 << ";" << " " << "#" << mp[s2] << nl;
//     }
    
//     return 0;
// }