#include <bits/stdc++.h>

using namespace std;

#define _max(aa, bb) (aa = max(aa, bb))
#define max2(aa, bb) max(aa, bb)
#define max3(aa, bb, cc) max(aa, max(bb, cc))
#define max4(aa, bb, cc, fk) max(max(aa, fk), max(bb, cc))
#define _min(aa, bb) (aa = min(aa, bb))


int main()
{
    int i,j,k,l,n,m,a=0,b;
    string st;
    cin>>st;
    n=st.size();
    for(i=0; i<n; i++)
    {
        _max(a,st[i]-48);
    }
    cout<<a<<endl;
    string st2[a+5];
    for(i=0; i<n; i++)
    {
        for(j=0; j<st[i]-48; j++){
            st2[j]+="1";
            //mm[st2[j]]=1;
        }
        for(j=st[i]-48;j<=a;j++){
               // if(mm[st2[j]])
            st2[j]+="0";
        }
    }
    for(i=0;i<a;i++){
            int f=0;
        for(j=0;j<st2[i].size();j++){
                if(st2[i][j]=='1')f=1;
            if(f==1){
                cout<<st2[i][j];
            }
        }
        cout<<" ";
    }
}