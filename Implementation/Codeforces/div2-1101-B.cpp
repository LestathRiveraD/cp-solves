
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
	ll n;
	cin >> n;
	vector<ll> arr(n), avg(n), res(n);
	cin >> arr;
	
	ll sum = arr[0];
	avg[0] = arr[0];
	for (int i = 1; i < n; i++)
	{
		sum += arr[i];
		avg[i] = sum / (i + 1);
	}
	
	ll cur = avg[0];
	for (int i = 0; i < n; i++)
	{
		cur = min(cur, avg[i]);
		res[i] = cur;
	}
	
	for (ll x : res)
		cout << x << " ";
	cout << '\n';
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
