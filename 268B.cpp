
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int sum =n;
   while(n){
    n--;
    int x =(n*(n+1))/2;
    sum+=x;
 
   }
   cout<<sum<<endl;
}