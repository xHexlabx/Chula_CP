#include<bits/stdc++.h>

using namespace std ;

map<string , int>cnt ;
string name ; 

int n , k ; 

int arr[1001] ;

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    cin >> n >> k ;

    for(int i = 0 ; i < n ; i ++ ){
        cin >> name ;
        cnt[name] ++ ;
    }
    int idx = 0 ;
    for(auto i : cnt){
        arr[idx ++] = i.second ; 
    }

    sort(arr , arr + cnt.size()) ;

    idx = max(0 , idx - k) ;
    cout << arr[idx] ;

    return 0 ;
}