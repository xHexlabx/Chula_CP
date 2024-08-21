#include<bits/stdc++.h>

using namespace std ;

int n , m ;

long long x , y ;
map<long long , long long>parent ;

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    cin >> n >> m ;

    while(n -- ){
        cin >> x >> y ;
        parent[y] = x ;
    }
    
    while(m -- ){
        
        cin >> x >> y ;

        if(x == y){
            cout << "NO\n" ;
            continue ;
        }

        if(parent.find(x) != parent.end() && parent.find(y) != parent.end() ){
            x = parent[x] ;
            y = parent[y] ;
        }
        else {
            cout << "NO\n" ;
            continue;
        }

        if(parent.find(x) != parent.end() && parent.find(y) != parent.end() ){
            x = parent[x] ;
            y = parent[y] ;
        }
        else {
            cout << "NO\n" ;
            continue;
        }

        if(x == y){
            cout << "YES\n" ;
            continue;
        }
        else {
            cout << "NO\n" ;
            continue;
        }

    }

    return 0 ;
}