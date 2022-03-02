#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,j,k,l,n,m,a,b,c=0;
    cin>>n;
    string st;

    cin>>st;

    for(i=0;i<n;i++){
        if(st[i]==st[i+1]){
            if('B'!=st[i+2] && 'B'!=st[i+1]){
                st[i+1]='B';
            }else if('R'!=st[i+2] && 'R'!=st[i+1]){
                st[i+1]='R';
            }else if('G'!=st[i+2] && 'G'!=st[i+1]){
                st[i+1]='G';
            }
            i++;
            c++;
        }
    }
    cout<<c<<endl;
    cout<<st<<endl;
}