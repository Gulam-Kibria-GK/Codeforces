#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k,l,n,c=0,m;
    string st;
    cin>>st;
    n = st.size();
    for(i=0; i<n; i++)
    {
        if(st[i]=='1' && st[i+1]=='4' && st[i+2]=='4')i+=2;
        else if(st[i]=='1' && st[i+1]=='4')i++;
        else if(st[i]!='1')c++;

    }
    string f=(c==0)?"YES":"NO";
    cout<<f<<endl;
}