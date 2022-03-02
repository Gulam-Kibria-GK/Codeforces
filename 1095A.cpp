#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j=0,n,m;
    cin>>n;
    string st;
    cin>>st;
    for(i=0;i<n;i+=j){
        cout<<st[i];
        j++;
    }
    cout<<endl;
}