#include <bits/stdc++.h>
typedef long long int ll;
#define ios         ios_base::sync_with_stdio(false);  cin.tie(0);    cout.tie(0);
using namespace std;
int main() {
    ios;
    ll q;
    cin>>q;
    while(q--)
    {
        ll k,n,a,b,s=0;
        cin>>k>>n>>a>>b;
        if(b*n >= k)
         {
         cout<<"-1"<<endl;;
         continue;
         }
         else
         if(a*n < k)
         {
             cout<<n<<endl;
             continue; 
         }
          {
             ll f=k/a; s=n-f;
           //  --f;
            // ++s;
          while(true)
          {
           //   cout<<"L"<<endl;
            if(f*a + s*b < k)
             {
          //       cout<<"L";
                 cout<<f<<endl;
                  break;
             }
          --f;
          ++s;
           }
          }
    }
}