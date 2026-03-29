#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>

void solve()
{
	int n, res = 0, cnt = 0;
	cin >> n;
	vi p(n);
	for (int i = 0; i < n; i++)
		cin >> p[i];
		
	vector<int> seen(n + 2, 0);
	
	for (int i = 0; i < n; i++) {
	    if (p[i] > i + 1) {
	        seen[p[i]]++;
	    }
	}
	for (int i = 1; i <= n; i++) {
	    if (seen[i]) {
	        res = max(res, i - 1 - cnt);
	        cnt++;
	    }
	}
	res = max(res, n - cnt);
	cout << res << '\n';
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
