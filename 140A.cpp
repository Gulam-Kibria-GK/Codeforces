#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi acos(-1.0)
int main()
{
   ll n;
   double R,r;
   cin>>n>>R>>r;
   double ans=asin((r/(R-r)*1.0))*1.0*n;
//cerr<<ans<<" "<<pi<<endl;
   if(n==1 && R>=r || ans<=pi+1e-9){
    cout<<"YES"<<endl;
   }else{
        cout<<"NO"<<endl;
   }
}