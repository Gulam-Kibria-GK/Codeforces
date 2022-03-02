#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,l,n,f;
    string s;
    cin>>n>>k>>s;
    f=n-1;
    while(s.substr(0,f)!=s.substr(n-f)){
    //cout<<s.substr(0,f)<<" "<<s.substr(n-f)<<endl;
        f--;}
       // cout<<f<<endl;
	cout<<s;
	for(i=0;i<k-1;i++)
        cout<<s.substr(f);

}