#include<bits/stdc++.h>

using namespace std ;

int arr[101][101] ;
int n , m , q , x_1 , y_1, x_2 , y_2 ;

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    cin >> n >> m >> q ;

    for(int i = 0 ; i <= 100 ; i ++ ){
        for(int j = 0 ; j <= 100 ; j ++ ){
            arr[i][j] = INT_MIN ;
        }
    }

    for(int i = 1 ; i <= n ; i ++ ){
        for(int j = 1 ; j <= m ; j ++ ){
            cin >> arr[i][j] ;
        }
    }

    while(q -- ){
        
        int res = INT_MIN ;
        
        cin >> x_1 >> y_1 >> x_2 >> y_2 ;


        if((x_2 < x_1 || y_2 < y_1) && ( (x_1 <= 0 || x_1 > n)  && (x_2 <= 0 || x_2 > n)) || ((y_1 <= 0 || y_1 > m) && (y_2 <= 0 || y_2 > m))){
            cout << "INVALID\n" ; 
            continue ;
        }

        if((x_2 < x_1 || y_2 < y_1)){
            cout << "INVALID\n" ; 
            continue ;
        }

        if(( (x_1 <= 0 || x_1 > n)  && (x_2 <= 0 || x_2 > n)) || ((y_1 <= 0 || y_1 > m) && (y_2 <= 0 || y_2 > m))){
            cout << "OUTSIDE\n" ;
            continue ;
        }
        

        for(int i = x_1 ; i <= x_2 ; i ++ ){
            for(int j = y_1 ; j <= y_2 ; j ++ ){
                res = max(res , arr[i][j]) ;
            }
        }

        cout << res << '\n' ;

    }
    return 0 ;
}