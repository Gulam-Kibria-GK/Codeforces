#define TASK_B
#ifdef TASK_B
#include<cstdio>
#include<iostream>
using  namespace std;
int a[5003];
int c[5003];
int b[5003];
int kt;
int main() {
    bool result = true;
    int n ,k;
    cin >> n >> k;

    for (register int i = 0; i < n; i++) {
        cin >> a[i];
        c[a[i]]++;
        if (c[a[i]] > k)
            result = false;
        //b[i] = c[a[i]];
    }

    if (result) {
        cout << "YES" << endl;
        for (register int i = 0; i < n; i++) {
            if (b[i])
                continue;
            for (register int j = i; j < n; j++) {
                if (a[i] == a[j]) {
                    b[j] = (kt%k) + 1;
                    kt++;
                }
            }
        }
        for (register int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
    else {
        cout << "NO" << endl;
    }
}