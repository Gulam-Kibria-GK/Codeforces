#include<bits/stdc++.h>
using namespace std;
long long int i,j,n,t,x,y;
string s;
int main()
{
    cin >> t;
    while(t--)
    {
        x = 0;
        cin >> s;
        x = s.size();
        if(s[x-1] == 'o')
        {
            cout << "FILIPINO"<< endl;
        }
        else if(s[x-1] == 'u')
        {
             cout << "JAPANESE" << endl;
        }
        else{
            cout << "KOREAN" << endl;
        }
    }
}