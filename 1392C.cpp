#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
 
ll ar[1000000];
 
int main() {
        
        ll t, n, k;
        cin >> t;
        while(t--) {
                cin >> n;
                for(int i = 1; i <= n; i++) {
                        cin >> ar[i];
                }
                ll d = 0, ans = 0, mx = ar[1];
                for(int i = 2; i <= n; i++) {
                        if(ar[i] < ar[i - 1]) {
                                ans += ar[i - 1] - ar[i];
                        }
                }
                cout << ans << endl;
        }
        return 0;
}