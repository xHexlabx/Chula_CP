#include<bits/stdc++.h>

using namespace std ;

int n ;
map<string , int>mpp ;
string word ;

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    cin >> n ;

    for(int i = 0 ; i < n ; i ++ ){
        cin >> word ;
        mpp[word] ++ ;
    }

    for(auto i : mpp){
        if(i.second > 1){
            cout << i.first << ' ' << i.second << '\n' ;
        }
    }

    return 0 ;
}