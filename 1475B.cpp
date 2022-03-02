#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>
#define L long long
using namespace std;

int main() {

	int t, n, d, m;
	bool f;

	cin >> t;
	while (t--) {

		cin >> n;
		d = n / 2020;
		m = n % 2020;

		if (m <= d) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}

	}
}