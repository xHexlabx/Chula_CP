#include<bits/stdc++.h>

using namespace std ;

int n ;

string teacher , subject ;
double point ;

map<string , double>teachers ;
map<string , double>subjects ;

map<string , double>teachers_cnt ;
map<string , double>subjects_cnt ;


int main(){

    ios_base :: sync_with_stdio(0) , cin.tie(0) ;

    cin >> n ;

    for(int i = 0 ; i < n ; i ++ ){
        cin >> subject >> teacher >> point ;
        subjects[subject] += point ;
        teachers[teacher] += point ;
        subjects_cnt[subject] += 1 ;
        teachers_cnt[teacher] += 1 ;
    }

    for(auto i : subjects){
        cout << fixed << setprecision(2) << i.first << ' ' << i.second / subjects_cnt[i.first]<< '\n';
    }

    for(auto i : teachers){
        cout << fixed << setprecision(2) << i.first << ' ' << i.second / teachers_cnt[i.first]<< '\n';
    }
    
    return 0 ;
}