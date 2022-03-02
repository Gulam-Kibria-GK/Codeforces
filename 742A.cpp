#include<bits/stdc++.h>
using namespace std;
int main()
{
   unsigned long long int i,n,valu=1,ans;
    cin>>n;
   if(n==0)
   {
       ans=1;
   }
   else if(n%4==1)
   {
       ans=8;
   }
   else if(n%4==2)
   {
       ans=4;
   }
   else if(n%4==3)
   {
       ans=2;
   }
   else if(n%4==0)
   {
       ans=6;
   }
   cout<<ans<<endl;
   return 0;
}