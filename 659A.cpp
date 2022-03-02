#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, a, b, k;
	cin >> n >> a >> b;
	while(b<0) b+=(n);
	k=(a+b)%n;
	if(k==0) k=n;
	cout << k << endl;
	return 0;
}