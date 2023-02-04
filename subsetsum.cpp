#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end();
#define allr(x) (x).rbegin(), (x).rend()
ll M = 1e9+7;


class solution{
   public:
   void subsetsum(int ind , vector <int> &arr , int n , vector <int>&ans , int sum){
      if(ind == n){
         ans.push_back(sum);
         return;
      }
      // element picked
      subsetsum(ind+1 , arr , n , ans , sum+arr[ind]);
      // element not picked
      subsetsum(ind+1 , arr , n , ans , sum);
   }
   vector <int> subsetsums(vector<int > arr , int n){
      vector<int> ans ;
      subsetsum(0 , arr , n , ans , 0);
      sort(ans.begin(), ans.end());
      return ans ;
   }
};
   int main()
   {
      vector <int > arr;
      solution ob;
      vector <int> ans = ob.subsetsums(arr , arr.size());
      sort(ans.begin(), ans.end());
      for(auto sum : ans){
         cout << sum << " ";
      }
      cout << endl;

      return 0;
   }

   
