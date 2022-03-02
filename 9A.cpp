# include <bits/stdc++.h>
using namespace std ;
int w , y ;
string arr [10]={"1/6" , "1/3" , "1/2" , "2/3" , "5/6", "1/1"} ;
int main ()
{
    cin >> w >> y ;
    int imax = max(w ,y) , temp=0 ;
    for (int i = imax ; i<6 ; i++ , temp++) ;
    cout << arr[temp] << endl ;
    return 0 ;
}