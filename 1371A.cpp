#include<bits/stdc++.h>
using namespace std;
const long long M=5e5+10,MOD=1e9+7;
typedef long long ll;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int d=n/2;
    	if(n&1)d++;
    	cout<<d<<'\n';
    }
    return 0;
 
}