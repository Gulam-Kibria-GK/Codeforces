#include<bits/stdc++.h>
using namespace std;

int cheikh(vector<int>v)
{

    int i,j,sum,a;
    for(i=0; i<v.size(); i++)
    {
        sum=0;
        for(j=i; j<v.size(); j++)
        {
            a=v[j];
            sum+=a;
            if(sum%3==0)return 1;
        }
    }
    return 0;
}

int main()
{

    string st;
    vector<int>v,v1;
    int i,c=0,a;
    cin >> st;
    for(i=0; i<st.size(); i++)
    {
        v.push_back(st[i]-48);
    }
    for(i=0; i<v.size(); i++)
    {
        a=v[i];
        v1.push_back(a);
        if(cheikh(v1)==1)
        {
            v1.clear();
            c++;
        }
    }

    cout << c << "\n";

    return 0;
}