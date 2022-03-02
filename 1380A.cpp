#include<bits/stdc++.h>
using namespace std;
 
int a[1010];
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int i = 1; i <= n; i++) cin >> a[i];
		bool ok = 0;
		for (int i = 1; i + 2 <= n; i++) {
			if (a[i] < a[i + 1] && a[i + 1] > a[i + 2]) {
				cout << "YES\n";
				cout << i << ' ' << i + 1 << ' ' << i + 2 << '\n';
				ok = 1; break;
			}
		}
		if (!ok) cout << "NO\n";
	}
    return 0;
}