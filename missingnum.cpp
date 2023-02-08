#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()


void solve(){
 int n ;
 cin >> n ;
  vector<int> a(n);
  for(int i = 1 ; i <=n ; i++){
    v.pb(i);
  }
  int result =1;
   for(int i = 2 ; i <=n ; i++){
    result = result^v[i];
  }
cout << result ;
return;

 
}





int main(){
    solve();
  
    return 0;
}
