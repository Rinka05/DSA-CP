#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define int ll;




ll binarysearch(vector<ll>& a , ll start ,ll end , ll key ){
    if(end <start){
        return a[start-1];
    }
    ll mid = start +(end-start)/2 ;
    if(key == a[mid]){
        return a[mid];
    }
    else if(key < a[mid]){
        return binarysearch(a , start , mid-1 , key);
    }
    else {
        return binarysearch(a , mid+1 , end , key);
    } 
}


#define ll long long int

int main()
{
int n ; cin >> n ;

ll a[n];
vector<ll> v;
ll key ;
cout << "enter key to search in the array : " ;
 cin >> key;
for(int i = 0 ; i <n ; i++){
    cin >> a[i];
    v.push_back(a[i]);
}
cout << binarysearch(v , 0 , n , key);



#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);

    freopen("output.txt", "w", stdout);

#endif
    return 0;

     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
