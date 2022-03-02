#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using pii = pair<int, int>;
using pib = pair<int, bool>;
using vi  = vector<int>;

const int INF   = 1e9;
const ll  INFLL = 2e18;
const int MOD   = 1e9 + 7;
const int N     = 2e5 + 10;

const int fx[8] = {+0, +0, +1, -1, +1, +1, -1, -1};
const int fy[8] = {+1, -1, +0, +0, +1, -1, +1, -1};

int a[501][501];
int b[501][501];

int main() {
    int t;

    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        map<int, int> mp;
        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                scanf("%d", &a[i][j]);
                mp[a[i][j]] = i;
            }
        }

        for (int i=0; i<m; ++i) {
            for (int j=0; j<n; ++j) {
                scanf("%d", &b[i][j]);
                if (!i) {
                    int row = mp[b[i][j]];
                    for (int k=0; k<m; ++k)
                        printf("%d ", a[row][k]);
                    puts("");
                }
            }
        }

    }
}