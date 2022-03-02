#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <iterator>
#define L long long
using namespace std;
 
int main() {
 
	L t, n;
	bool f;
 
	cin >> t;
	while (t--) {
		cin >> n;
		
		while(n % 2 == 0) {
		    n /= 2;
		}
		
		if (n > 1) {
		    cout << "YES\n";
		}
		
		else {
		    cout << "NO\n";
		}
	}
}