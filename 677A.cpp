#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, cnt = 0, x, h;
    cin>>n>>h;
    for(int i = 0; i<n; i++)
    {
        cin>>x;
        if(x>h) cnt++;
    }
    cout<<cnt+n<<endl;
}