#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end();
#define allr(x) (x).rbegin(), (x).rend()
ll M = 1e9+7;


unsigned int countnumofsetbits(unsigned int n ){
   unsigned int count=0;
   while(n){
      count += n&1;
      n = (n>>1);
   }
   return count ;
}
   int main()
   {
    int n ; cin >> n ;
  cout << countnumofsetbits(n);
  

  // ***********************OR**************************
  cout << __bulitint_popcount(n);
  // O(1) operation
      return 0;
   }

   
