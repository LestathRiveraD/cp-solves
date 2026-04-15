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

ll g(ll a, ll b, ll c, ll m)
{
	ll three = m / lcm(a, lcm(b, c));
	ll two = (m / lcm(a, b)) + (m / lcm(a, c)) - 2 * three;
	ll one = (m / a) - three - two;
	return three * 2 + two * 3 + one * 6;
}

void solve()
{
    /*
    1. Notice that all three things will overlap every lcm(a, b, c) days.
    2. For a single thing a, can find 2-day overlaps using inclusion-exclusion
    3. Use set theory again to find days with events but no overlaps.
    4. Easily compute scores in O(1)
    5. Repeat all of the above for all a, b, c.
    */
	ll a, b, c, m;
	cin >> a >> b >> c >> m;
	cout << g(a, b, c, m) << " " << g(b, a, c, m) << " " << g(c, a, b, m) << '\n';
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

