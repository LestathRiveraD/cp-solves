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
	ll n, m;
	cin >> n >> m;
	vl arr(n);
	cin >> arr;
	
	ll l = 0, r = m - 1;
	
	while (r < n) // O(n)
	{
		if (arr[l] == arr[r])
		{
			bool found = false;
			for (int i = l; i <= r; i++) // O(m)
			{
				if (arr[i] != arr[l])
				{
					found = true;
					break;
				}
			}
			if (!found)
			{
				cout << "NO\n";
				return; 
			}
		}
		l++;
		r++;
	}
	cout << "YES\n"; // overall O(n * m), not O(n^2)
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
