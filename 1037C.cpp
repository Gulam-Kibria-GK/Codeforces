#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,l,n,m,a,b,c=0;
    cin>>n;
    string st,st2;
    cin>>st>>st2;
    for(i=0;i<n;i++){
        if(st[i]!=st2[i]){
            if(st[i]==st2[i+1] && st[i+1]==st2[i] && i+1<n){
                swap(st[i],st[i+1]);
                c++;
            }
            else c++;
        }
    }
    cout<<c<<endl;
    return 0;
}