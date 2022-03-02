#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll h,l;
    cin>>h>>l;
    double p=((l*l)-(h*h))/(2.0*h);
    cout<<fixed<<setprecision(13)<<p<<endl;
}