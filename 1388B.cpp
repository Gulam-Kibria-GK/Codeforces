#include<bits/stdc++.h>
using namespace std;
long long t,n,x,i;
int main()
{
  cin >> t;
  while(t--)
  {
      cin >> n;
      x = (n+3)/4;
     for(i=0;i<n-x;i++)cout << '9';
     for(i=0;i<x;i++)cout << '8';
     cout <<'\n';
  }
}