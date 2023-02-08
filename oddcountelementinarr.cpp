#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

//O(N*N)
void solve(){
 int n ;
 cin >> n ;
 int a[n]; 
 for(int i = 0 ; i < n ; i++){
    cin >> a[i];
 }

 for(int i = 0 ; i < n ; i++){
    int count = 0 ;
    for(int j = 0 ;j < n ; j ++){
        if(a[i] == a[j]){
            count++;
        }
    }
    if(count&1){
        cout << a[i] ;
        return ;
    }
 }
 cout << "-1" ;
 return ;
 
}

//O(N)
void method2(){
    int n ;
 cin >> n ;
 int a[n]; 
 for(int i = 0 ; i < n ; i++){
    cin >> a[i];
 }
 unordered_map<int , int> m ;
 for(int i = 0 ; i < n ; i++){
    m[a[i]]++;
 }
 for(auto i : m){
    if(i.second %2 != 0){
        cout << i.first ;
        return ;
    }
 }
 cout << "-1";
 return ;

}


//O(N)
void method3(){
     int n ;
 cin >> n ;
 int a[n]; 
 for(int i = 0 ; i < n ; i++){
    cin >> a[i];
 }

int result =0;
// XOR property
// 0^x = x
// x^x = 0
 for(int i = 0 ; i < n ; i++){
   result = result^a[i];
 }
 cout << result;
}


int main(){
    solve();
    method2();
    method3();
    return 0;
}
