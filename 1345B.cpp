
//1345B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m,k; cin>>t;
    while(t--){cin>>n; m=0;
     while(n>1)
        {k=2;
         while(n>=k)
        {n=n-k; k=k+3;
        }
     m++;}
      cout<<m<<endl;
      }
}