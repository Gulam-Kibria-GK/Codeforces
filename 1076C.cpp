#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define inf 2>>29
#define pfd(x,k) cout<<fixed<<setprecision(k)<<x;
#define TT(a,b)         cerr << #a << ": " << a << " | " << #b << ": " << b << endl;
#define TTT(a,b,c)      cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << endl;
int main()
{
    double i,j,k,l,n,m;
    cin>>n;
    while(n--){
        cin>>m;
        if(m*m<4*m){
            cout<<"N"<<endl;
        }
        else{
            double a,b;
            a=(m+sqrt(m*m-4*m))/2.0;
            cout<<"Y ";
            pfd(a,9);
            cout<<" ";
            pfd(m-a,9);
            cout<<endl;
        }
    }
}