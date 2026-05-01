#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
 
#define pb push_back()
 
template<typename T>
istream& operator>>(istream& in, vector<T> &vec){
    for(auto &x : vec){
        in>>x;
    }
    return in;
}
 
void solve()
{
	ll n, q;
	cin >> n >> q;
	ll LOG = 63 - __builtin_clzll(n);
	vector<ll> arr(n);
	cin >> arr;
	
	// 1. Pre process array
	// constructing a sparse table works here because:
	// queries on a static array with idemponent and associative operation
	vector<vector<ll>> sparse(LOG + 1, vector<ll>(n, 0));
	for (int j = 0; j < n; j++)
		sparse[0][j] = arr[j];
	for (ll i = 1; i <= LOG; i++)
		for (ll j = 0; (j + (1 << i) - 1) < n; j++)
			sparse[i][j] = min(sparse[i - 1][j], sparse[i - 1][j + (1 << (i - 1))]);
	
	// 2. Answer queries
	for (int asd = 0; asd < q; asd++)
	{
		ll a, b;
		cin >> a >> b;
		ll len = (max(a, b) - min(a, b)) + 1;
	
		ll i = 63 - __builtin_clzll(len);
		cout << min(sparse[i][a - 1], sparse[i][b - (1 << i)]) << '\n';
	}
}
 
int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
