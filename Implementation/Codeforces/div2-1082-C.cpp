#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    /*
        1. Notice GCD property GCD(a[1], a[2], a[3]) = GCD(all adjacent pairs)
        2. By induction, it holds that GCD(array) = GCD(subarray, subarray)
        3. How can you change the value of some a_i?
        4. Notice that GCD(a, b) = GCD(LCM(a, b), b)
        5. Because we want to decrease a_i, can change it if and only if LCM(a,b) < a_i
        6. Do this for all i | 2 <= i <= n - 1
        7. For i = 1, res++ if GCD(a[i], a[i + 1]) < a[i]
        8 Analoguous reasoning for i = n 
    */
	int n;
	cin >> n;
	vi a(n), b(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];
	
	int res = 0;
	
	// check start
	if (gcd(a[0], a[1]) < a[0])
		res++;
		
		
	// check all triplets
	for (int i = 1; i < n - 1; i++)
	{
		int x = gcd(a[i - 1], a[i]);
		int y = gcd(a[i], a[i + 1]);
		int a_i = lcm(x, y);
		if (a_i < a[i])
			res++;
	}
	// check end
	if (gcd(a[n - 2], a[n - 1]) < a[n - 1])
		res++;
	
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
