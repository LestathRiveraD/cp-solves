// Problem: B. Begginer's Zelda
// Contest: Codeforces - Codeforces Round 915 (Div. 2)
// URL: https://codeforces.com/contest/1905/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
 
#define pb push_back
 
template<typename T>
istream& operator>>(istream& in, vector<T> &vec){
    for(auto &x : vec){
        in>>x;
    }
    return in;
}
 
void bfs(vector<vector<ll>> &tree, ll &ans)
{
    cout << "dgsfuyoahi\n";
}
void solve()
{
    ll n;
    cin >> n;
 
    vector<ll> deg(n + 1,0);
    
    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        deg[u]++;
        deg[v]++;
    }
    
    ll ans = 0;
    for (ll x : deg)
        if (x == 1)
            ans++;
    if (ans % 2 == 1)
        ans++;
    cout << ans / 2 << '\n';
}
 
int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

