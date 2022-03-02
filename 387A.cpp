#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n1,n2,n3,n4,valu1,valu2;
    string st,st2;
    cin>>st>>st2;
    n1=10*(st[0]-48)+(st[1]-48);
    n2=10*(st[3]-48)+(st[4]-48);
    n3=10*(st2[0]-48)+(st2[1]-48);
    n4=10*(st2[3]-48)+(st2[4]-48);
    if(n1<n3)
    {
        n1=n1+24;
    }
    else if(n1==n3 && n4>n2)
    {
        n1=n1+23;
        n2+=60;
    }
    if(n4>n2 && n1==0)
    {
        n2=60+n2;
        n1=23;
    }
    else if(n4>n2 && n1!=n3 && n1!=0)
    {
        n2=60+n2;
        n1=n1-1;
    }
    valu1=abs(n1-n3);
    valu2=abs(n2-n4);

    if(valu1<10 && valu2<10)
    {
         cout<<"0"<<valu1<<":"<<"0"<<valu2<<endl;
    }
    else if(valu1<10 && valu2>=10)
    {
        cout<<"0"<<valu1<<":"<<valu2<<endl;
    }
    else if(valu2<10 && valu1>=10)
    {
        cout<<valu1<<":"<<"0"<<valu2<<endl;
    }
    else
    cout<<valu1<<":"<<valu2<<endl;

    return 0;
}