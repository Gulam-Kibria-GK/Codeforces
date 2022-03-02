#include<bits/stdc++.h>
using namespace std;
 
#define ll               long long
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    clock_t clk = clock();
    //freopen("A.txt","r",stdin);
    //freopen("B.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x=0;
        cin>>n;
        for(int i=1; i<n/2; i++)
            x+=pow(2,i);
        x+=pow(2,n);
        for(int i=n/2; i<n; i++)
            x-=pow(2,i);
        cout<<x<<endl;
 
    }
    clk = clock() - clk;
    cerr << "Time Elapsed: " << fixed << setprecision(8) << ((long double)clk)/CLOCKS_PER_SEC << "\n";
    return 0;
}