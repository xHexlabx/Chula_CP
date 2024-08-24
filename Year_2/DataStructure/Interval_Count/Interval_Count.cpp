#include<bits/stdc++.h>

using namespace std ;

int n , m , k , val ;

vector<int>vec ;

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    cin >> n >> m >> k ;

    vec.push_back(INT_MIN) ;
    vec.push_back(INT_MAX) ;

    for(int i = 0 ; i < n ; i ++ ){
        cin >> val ;
        vec.push_back(val) ;
    }
    
    sort(vec.begin() , vec.end()) ;

    while(m -- ){

        cin >> val ;
        cout << upper_bound(vec.begin() , vec.end() , val + k) - lower_bound(vec.begin() , vec.end() , val - k) << ' ';
    }

    return 0 ;
}