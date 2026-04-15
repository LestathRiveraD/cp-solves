#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>

void solve()
{
    /*
        1. Is it dp?
        2. How can I solve the ith subproblem?
        3. Solve problem for case i, 1 <= i <= n
        4. Find recurrence: res = (visited[i] ? res : res + 1)
        4.1 DP will always find the correct solution because at every
        point we're either discarding the current term and keeping the
        previous one, or we do not discard it. In that case the solution
        is always the previous one plus 1.
    */
    int n, res = 0;
	cin >> n;
	vector<int> v(n + 1), visited(n + 1, 0);
	for (int i = 1; i <= n;i++)
		cin >> v[i];
	for (int i = 1; i <= n; i++)
	{
		res = (visited[i] == 1 ? res : res + 1);
		visited[v[i]] = 1;
	}
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
