#include<bits/stdc++.h>

using namespace std ;

int n ;
const long long mod = 1e9 + 7 ;

long long dp[2] , curr , pre ;

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    cin >> n ;

    dp[0] = 1 ;
    dp[1] = 1 ;

    for(int i = 1 ; i <= n ; i ++ ){

        pre = dp[0] , curr = dp[1] ;

        dp[0] = curr ;
        dp[1] = ((curr + curr) % mod + pre) % mod ;

    }

    cout << dp[1] ;

    return 0 ;
}