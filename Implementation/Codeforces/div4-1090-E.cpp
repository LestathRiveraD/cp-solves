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
	ll n;
	cin >> n;
	vector<ll> arr(n);
	cin >> arr;
	ll sol = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			sol = max(sol, arr[j] ^= arr[i]);
	
	cout << sol << '\n';
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
