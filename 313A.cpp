#include <bits/stdc++.h>
using namespace std;
int n;
main()
{
cin>>n;
cout<<max(n,max(n/100*10+n%10,n/10))<<endl;
}