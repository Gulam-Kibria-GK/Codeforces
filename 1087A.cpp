#include <bits/stdc++.h>
using namespace std;

#define T(a)            cerr << #a << ": " << a << endl;
#define TT(a,b)         cerr << #a << ": " << a << " | " << #b << ": " << b << endl;
#define TTT(a,b,c)      cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << endl;
#define TTTT(a,b,c,d)   cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;

///**** Max/Min********///

#define _max(aa, bb) (aa = max(aa, bb))
#define max2(aa, bb) max(aa, bb)
#define max3(aa, bb, cc) max(aa, max(bb, cc))
#define max4(aa, bb, cc, fk) max(max(aa, fk), max(bb, cc))
#define _min(aa, bb) (aa = min(aa, bb))
#define min2(aa, bb) min(aa, bb)
#define min3(aa, bb, cc) min(aa, min(bb, cc))
#define min4(aa, bb, cc, dd) min(min(aa, dd), min(bb, cc))
#define ll long long
vector<ll>v;
#define pb push_back

int main()
{
    ll i,j,k,l,n,m,a,b,f=0;
    string st,st2="",st3="";
    cin>>st;
    n=st.size();
    if(n%2==0)f=1;
    for(i=0; i<(n/2)-f; i++)
    {
        st2+=st[i];
    }
    reverse(st2.begin(),st2.end());
    for(i=n/2-f+1; i<n; i++)
    {
        st3+=st[i];
    }
    string ss="";
    ss+=st[(n/2)-f];
    j=0,k=0;
    for(i=0; i<n-1; i++)
    {
        if(i%2==0)
        {

            ss+=st3[j];
            j++;
        }
        else
        {
            ss+=st2[k];
            k++;
        }
    }
    cout<<ss<<endl;
}