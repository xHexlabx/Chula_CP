#include<bits/stdc++.h>

using namespace std ;

const int Size = 1e6 + 1 ;
int n ; 
int arr[Size] , dp[Size] ;

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    cin >> n ;

    for(int i = 1 ; i <= n ; i ++ ){
        cin >> arr[i] ;
    }

    dp[1] = arr[1] ;

    for(int i = 1 ; i <= n ; i ++ ){
        if(i == 1)continue;
        else if(i == 2){
            dp[i] = dp[i - 1] + arr[i] ;
        }
        else if(i == 3){
            dp[i] = max(dp[i - 1] , dp[i - 2]) + arr[i] ;
        }
        else {
            dp[i] = max(dp[i - 1] , max(dp[i - 2] , dp[i - 3])) + arr[i] ;
        }
    }

    cout << dp[n] ;

    return 0 ;
}