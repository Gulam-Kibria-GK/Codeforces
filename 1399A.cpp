#include <iostream>
#include <algorithm>
using namespace std;
 
int n,t;
int a[55];
 
int main()
{
	cin>>t;
	while(t--)
	{
		bool f=true;
		cin>>n;
		for(int i=0; i<n; i++)
			cin>>a[i];
		sort(a,a+n);
 
		for(int i=1; i<n; i++)
			if(a[i]-a[i-1]>1)
				f=false;
 
		if(f) cout<<"YES\n";
		else cout<<"NO\n";
	}
}