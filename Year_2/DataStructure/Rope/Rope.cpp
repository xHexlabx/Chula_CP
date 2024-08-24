#include<bits/stdc++.h>

using namespace std ;

int n , arr[3] ;
int dp[4001] ;

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    cin >> n ;

    for(int i = 0 ; i < 3 ; i ++ )cin >> arr[i] ;
    for(int i = 1 ; i <= n ; i ++ )dp[i] = -5000 ;

    dp[0] = 0 ;

    for(int i = 1 ; i <= n ; i ++ ){
        
        for(int j = 0 ; j < 3 ; j ++ ){

            if(i - arr[j] >= 0){
                dp[i] = max(dp[i] , 1 + dp[i - arr[j]]) ;
            }

        }

    }

    cout << dp[n] ;
    
    return 0 ;
}