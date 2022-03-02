#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,x,c=0;
   cin>>n;
   char ch[n+5];
   for(i=0;i<n;i++)
    cin>>ch[i];
   for(i=0;i<n-1;i++)
   {
       if((ch[i]=='R' && ch[i+1]=='U') || (ch[i]=='U' && ch[i+1]=='R'))
       {
           c++;
           i++;
       }
   }
   int s=n-(2*c);
   s=c+s;
   cout<<s<<endl;
}