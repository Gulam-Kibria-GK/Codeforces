#include<bits/stdc++.h>
using namespace std;
int n;
double w;
double ans;
int a[999999];
int main()
{
	cin>>n>>w;
	for(int i=1;i<=n*2;++i)
	    cin>>a[i];
	sort(a+1,a+1+n*2);
	double mm=min(a[1]*1.,a[n+1]*1./2);
	ans=min(w,mm*3*n);
	printf("%.10f\n",ans);
}