#include<bits/stdc++.h>

using namespace std ;

int n , m ;

long long val ;

long long arr_1[200001] , arr_2[200001] ;

map<long long , int>cnt ;
vector<long long>ans ;

int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    cin >> m >> n ;

    for(int i = 0 ; i < m ; i ++ ){
        cin >> arr_1[i] ;
        if(cnt[arr_1[i]] == 0)cnt[arr_1[i]] ++ ; 
    }
    
    for(int i = 0 ; i < n ; i ++ ){
        cin >> arr_2[i] ;
        if(cnt[arr_2[i]] == 1)cnt[arr_2[i]] ++ ; 
    }

    for(int i = 0 ; i < m ; i ++ ){
        if(cnt[arr_1[i]] > 1)ans.push_back(arr_1[i]) ;
    }
    
    for(int i = 0 ; i < n ; i ++ ){
        if(cnt[arr_2[i]] > 1)ans.push_back(arr_2[i]) ;
    }

    sort(ans.begin() , ans.end()) ;

    ans.erase(unique(ans.begin() , ans.end()) , ans.end()) ;

    for(auto i : ans){
        cout << i << ' ' ;
    }

    return 0 ;
}