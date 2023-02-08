#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

//O(N*|N|)
bool solve(int num){
 
  int n , p , rev =0;
  n = num;
  while(num!=0){
     p = num%10;
     rev = (rev*10)+p;
     num = num/10;
  } 
  if(n== rev){
     return true;
  }
  else
  return false;
}





int main(){
  int num ; cin >> num;
  while(!solve(num)){
    num += 1;

  }
  cout << "next smallest pallindrome is: ";
  cout << num ;
  
    return 0;
}
