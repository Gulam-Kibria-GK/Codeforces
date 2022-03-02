#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
  ll n;
  string s;
  cin >> s;
  n=s.size();
  cout << 4 << endl;
  cout <<"R " << 2 << endl;
  n+=n-2;
  cout << "R " << n-1 << endl;
  n++;
  cout << "L " << n-1 << endl;
  n+=n-2;
  cout << "L " << 2 << endl;
}