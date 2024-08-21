#include<bits/stdc++.h>

using namespace std ;

int n , m , val ;

vector<int>vec ;

bool mpp[2000001] ;

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    cin >> n >> m ;
    
    for(int i = 0 ; i < n ; i ++ ){
        cin >> val ;
        vec.push_back(val) ;
    }
    
    sort(vec.begin() , vec.end()) ;

    vec.erase(unique(vec.begin() , vec.end()) , vec.end()) ;
    
    for(int i = 0 ; i < vec.size() ; i ++ ){
        for(int j = i + 1 ; j < vec.size() ; j ++ ){
            mpp[vec[i] + vec[j]] = true ;
        }
    }

    while(m -- ){
        cin >> val ;
        if(mpp[val]){
            cout << "YES\n" ; 
        }
        else {
            cout << "NO\n" ;
        }
    }
    return 0 ;
}