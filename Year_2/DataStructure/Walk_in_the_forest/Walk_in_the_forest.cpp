#include<bits/stdc++.h>

using namespace std ;

int n , m ;

int arr[501][501] ;
int dp[501][501] ;

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    cin >> n >> m ;

    for(int i = 1 ; i <= n ; i ++ ){
        for(int j = 1 ; j <= m ; j ++ ){
            cin >> arr[i][j] ;
        }
    }

    dp[1][1] = arr[1][1] ;

    for(int i = 1 ; i <= n ; i ++ ){
        for(int j = 1 ; j <= m ; j ++ ){

            if(i == 1 && j == 1)continue ;
            
            if(i > 1){
                dp[i][j] = max(dp[i][j] , dp[i - 1][j] + arr[i][j]) ;
            }
            if(j > 1){
                dp[i][j] = max(dp[i][j] , dp[i][j - 1] + arr[i][j]) ;
            }
            if(i > 1 && j > 1){
                dp[i][j] = max(dp[i][j] , dp[i - 1][j - 1] + 2 * arr[i][j]) ;
            }
        }
    }

    cout << dp[n][m] ;

    return 0 ;
}