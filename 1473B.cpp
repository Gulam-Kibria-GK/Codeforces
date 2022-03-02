#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;


    while(t--)
    {
        string s,t,s1,t1;
        cin>>s>>t;
        ll sz1=s.size(),sz2=t.size();
        s1=s;t1=t;
        while(sz1*sz2>=s.size() && sz1*sz2>=t.size()){
            if(s==t){
                break;
            }else if(s.size()>t.size()){
                t+=t1;
            }else{
                s+=s1;
            }
           // cerr<<s<<" "<<t<<endl;
            if(s==t)
                break;
        }
        if(s==t)
            cout<<s<<endl;
        else
            cout<<-1<<endl;
    }
}