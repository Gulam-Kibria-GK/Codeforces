#include<bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0 , n , a , b;

    cin >> n;

    for( ; n-- ; )
    {
        cin >> a >> b;

        if(b - a >= 2)
        {
            count++;
        }
    }

    cout << count << endl;
}