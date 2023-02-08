#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()


void solve(){
 int n , m ;
 cin >> n >> m ;
 int a[n]; int b[m];
 for(int i = 0 ; i < n ; i++){
    cin >> a[i];
 }
 for(int i = 0 ; i < m ; i++)
 cin >> b[i];
 sort(a , a+n);
 sort(b , b+m);
 int c[n+m];
 int i = 0 , j = 0, k=0;
 while(i < n && j < m){
    if(a[i] < a[j]){
        c[k] = a[i];
         k++;
        i++;
    }
    else{
         c[k] = b[j];
         k++;
        j++;
    }
 }
 while(i < n){
c[k] = a[i];
i++; k++;
 }
 while(j < m){
    c[k] = b[j];
    j++; k++;
 }

for(int k = 0 ; k < m+n ; k++){
    cout << k << " ";
}
cout << endl;
   
}



int main(){
    solve();
    return 0;
}
