// Problem: F. The 67th Tree Problem
// Contest: Codeforces - Codeforces Round 1090 (Div. 4)
// URL: https://codeforces.com/problemset/problem/2218/F
// Memory Limit: 256 MB
// Time Limit: 4000 ms
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

void solve()
{
	ll x, y;
	cin >> x >> y;
	
	if ((x + y % 2 == 0 && x == 0) || (x + y % 2 == 1 && y == 0) || (x > y))
	{
		cout << "NO\n";
		return;
	}	
	
	if (x == 1 && y == 1)
	{
		cout << "YES\n1 2\n";
		return;
	}
	
	if ((x + y) % 2 == 0)
		x--;
	else
		y--;
	cout << "YES\n";
	vector<vector<ll>> res;
	ll cnt = 2;
	for (int i = 0; i < y; i++)
	{
		vector<ll> cur = {1, cnt};
		res.pb(cur);
		cnt++;
	}
	
	for (int i = 2; i <= x + 1; i++)
	{
		vector<ll> cur = {i, cnt};
		res.pb(cur);
		cnt++;
	}
	
	for (auto x : res)
		cout << x[0] << " " << x[1] << '\n';
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
