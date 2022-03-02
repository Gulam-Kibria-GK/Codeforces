#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll i,j,k,l,n,m,c=0;
   string s;
   cin>>s;
   n= s.size();
   stack<char>st;
   for(i=0;i<n;i++)
   {
       if(st.size()==0 )
           st.push(s[i]);
       else if(st.top()!=s[i])
           st.push(s[i]);
       else
       {
           st.pop();
           c++;
       }
   }
   if(c%2==0)
       cout<<"NO"<<endl;
   else
       cout<<"YES"<<endl;
}