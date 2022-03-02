#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  ll T;
  cin >> T;
  while(T --){
    ll a, b;
    cin >> a >> b;
    if(b < a){
        cout << a + b << endl;
    } else {
        cout << b - (b % a) / 2 << endl;
    }
  }
    return 0;
}