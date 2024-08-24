#include<bits/stdc++.h>

using namespace std ;

int n ;
string name ;
map<string , int>mpp ;
int MAX = 0 ;

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ; 

    cin >> n ;

    for(int i = 1 ; i <= n ; i ++ ){
        cin >> name ;
        mpp[name] ++ ;
    }

    for(auto i : mpp){
        if(i.second >= MAX){
            MAX = i.second ;
            name = i.first ;
        }
    }

    cout << name << ' ' << MAX ;
    
    return 0 ;
}