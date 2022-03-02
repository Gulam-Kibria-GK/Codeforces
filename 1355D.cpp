#include<bits/stdc++.h>
using namespace std;
long long n,s,i;
int main()
{
    cin >> n >> s;
    if(s/n <2)cout << "NO";
    else
    {
        cout << "YES\n";
        for(i=0;i<n-1;i++)cout << s/n << ' ';
        cout << s/n+s%n << endl;
        cout << "1";
    }
}