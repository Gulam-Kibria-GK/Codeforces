    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long int
    #define ff first
    #define ss second
    #define pb() push_back()
    //#define mx 10000000
    //ll prime[mx], arr[mx], dx[]={0,0, 1, -1, 1,-1, 1, -1}, dy[]={1,-1, 0, 0, 1, 1, -1, -1};
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int i,j,k, l, m,n, x, y,z, ans=0, hi, low, mid, mn, mx;
            string a, b;
            cin>>x>>y>>z;
            if(x>y)
            {
                if(!z) ans=1;
                else
                {
                    hi=z; low=0, mn=0;
                    while(hi>=low)
                    {
                        mid=(hi+low)>>1;
                        if(y+mid<x+(z-mid)) low=mid+1, mn=max(mn, mid);
                        else hi=mid-1;
                    }
                    ans=mn+1;
                }
            }
            else if(z && x+z>y)
            {
                hi=z; low=0, mn=1e9;
                while(hi>=low)
                {
                    mid=(hi+low)>>1;
    //                printf("\nhi=%d low=%d mid=%d mn=%d....\n", hi, low, mid,mn);
                    if(x+mid>y+(z-mid)) hi=mid-1, mn=min(mn, mid);
                    else low=mid+1;
    //                printf("hi=%d low=%d mid=%d mn=%d\n", hi, low, mid,mn);
                }
                ans=(z-mn)+1;
            }
            cout<<ans<<endl;
        }
        return 0;
    }