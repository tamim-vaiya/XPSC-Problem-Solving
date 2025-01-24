#include <bits/stdc++.h>
#include <set>
#define ll long long int
#define nl cout << endl
using namespace std;


void solve() {
    int n;
    cin>>n;
    bool flag=true;
    set<int> st;
    ll mx=0;

    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==0){
            mx=max(mx,a[i]);
        }
        else{
            st.insert(a[i]-b[i]);
        }
    }

    for(int i=0;i<n;i++){
        if(b[i]==0){
            mx=max(mx,a[i]);
        }
        else if(b[i]>a[i]){
            cout << "NO" << endl;
            return;
        }
        else{
            st.insert(a[i]-b[i]);
        }
    }
 
    if(st.size()==0){
        cout << "YES" << endl;
    }
    else if(st.size()==1){
        for(auto x:st){
            if(x>=mx){
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt; while(tt--)
    solve();
    return 0;
}