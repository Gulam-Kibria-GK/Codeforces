#include<bits/stdc++.h>
using namespace std;


int main(){
    int i,j,k,l,n,m;
    cin>>n>>m;
    k=m;
    if(n<m || (m==1 && n>1)){cout<<-1<<endl;return 0;}
    map<int,char>mm;
    char h='a';
    for(i=0;i<26;i++){
        mm[i]=h;
        h++;
    }
    string st="";
    if(n==m){
        for(i=0;i<n;i++){
            st+=mm[i];
        }
        cout<<st<<endl;
        return 0;
    }
    
    for(i=0;i<n-(m-2);i++){
        if(i%2==0)
        st+=mm[0];
        else st+=mm[1];
    }
    for(i=0;i<m-2;i++){
        st+=mm[i+2];
    }
    cout<<st<<endl;
    return 0;
}