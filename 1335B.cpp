#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll i,k,n,m,a,b,c,d;
    cin>>k;
    while(k--)
    {
        cin>>a>>b>>c;
        vector<char>ch,ch2;
        ch.push_back('a');
        if(c==1)
        {
            for(i=0; i<(b-c); i++)
            {
                ch.push_back('a');
            }
        }
        else
        {
            for(i=0; i<(b-c+1); i++)
            {
                ch.push_back('b');
            }
        }
        char h='c';
        for(int j=0; j<c-2; j++)
        {
            ch.push_back(h);
            h++;
        }
        int j=0;
        for(i=0; i<a; i++)
        {
            ch2.push_back(ch[j]);
            j++;
            if(j==ch.size())
                j=0;
        }

        for(i=0; i<a; i++)
        {
            cout<<ch2[i];
        }
        ch2.clear();
        ch.clear();
        cout<<endl;
    }
}