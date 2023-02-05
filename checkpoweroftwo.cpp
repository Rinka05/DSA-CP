#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end();
#define allr(x) (x).rbegin(), (x).rend()
ll M = 1e9+7;

bool ispoweroftwo(ll n){
  // this gives false value coz the value of powetr of 2 is always of form 1000000....000 and substracting one gives 111111111......11111 and (&) operation gives zero
   return (n&(n-1));
}
************************************or**********************************************
bool ispoweroftwo(ll n){
  if(n==0){
   return false;
  }
  else {
   return ((ceil(log2(n))) == floor(log2(n)));
  }
}
   int main()
   {
   ll n ; cin >> n ;
   if(ispoweroftwo(n)){
      cout << "YES" ;
   }
   else cout << "NO";
     
  
      return 0;
   }

   
   int main()
   {
   ll n ; cin >> n ;
   if(ispoweroftwo(n)){
      cout << "NO" ;
   }
   else cout << "YES";
     
      return 0;
   }

   
