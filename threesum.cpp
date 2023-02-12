#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define all(x) (x).begin(), (x).end();
#define allr(x) (x).rbegin(), (x).rend()
ll N= 1e5 + 7;
// cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

int main()
{
 int n ; cin >> n ; int a[n];
 int sum ; cin >> sum;
 for(int i = 0 ; i < n ; i++)
 cin >> a[i];
 sort(a , a+n);
 for(int i = 0 ; i < n-2 ; i++){
    int l = i+1 ; int r = n-1;
    while(l < r){
        if(a[i]+a[l]+a[r] ==sum){
            cout <<"Triplet is ->"<< a[i] << " " << a[l] << " " << a[r];
             break;
        }
        else if(a[i]+a[l]+a[r] <sum){
            l++;
        }
        else{
            r--;
        }
    }

 }
 return 0;
 
}
