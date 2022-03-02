#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        ll a=0,b=0;
        stack<char>ch;
        for(int i=0; i<s.size(); i++)
        {
            if(ch.empty())
            {
                ch.push(s[i]);
            }
            else if(!ch.empty())
            {
                char k=ch.top();
                if(k=='A' && s[i]=='B')
                {
                    ch.pop();
                }
                else if(k=='B' && s[i]=='B')
                {
                    ch.pop();
                }
                else
                {
                    ch.push(s[i]);
                }
            }
        }
        cout<<ch.size()<<endl;
 
    }
    return 0;
}