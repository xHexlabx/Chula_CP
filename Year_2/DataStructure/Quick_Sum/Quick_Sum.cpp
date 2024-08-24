#include<bits/stdc++.h>

using namespace std ;

int n , m , q , x_1 , y_1 , x_2 , y_2 ;

int qs[1001][1001] ;

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    cin >> n >> m >> q ;

    for(int i = 1 ; i <= n ; i ++ ){
        for(int j = 1 ; j <= m ; j ++ ){
            cin >> qs[i][j] ;
            qs[i][j] += qs[i - 1][j] + qs[i][j - 1] - qs[i - 1][j - 1] ;
        }
    }

    while(q -- ){
        cin >> x_1 >> y_1 >> x_2 >> y_2 ;
        x_1 ++ , x_2 ++ , y_1 ++ ,y_2 ++ ;
        cout << qs[x_2][y_2] - qs[x_2][y_1 - 1] - qs[x_1 - 1][y_2] + qs[x_1 - 1][y_1 - 1] << '\n' ;
    }

    return 0 ;
}