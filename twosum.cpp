#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

//O(N*|N|)
void solve(){
    int n ; cin >> n;
    
    int x; cin>>x;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    bool flag = false;
    for(int i = 0 ; i < n-1; i++){
        for(int j = i+1 ; j < n ; j++){
            if(a[i]+a[j] == x){
                bool flag = true;
              
              
            }
            if(flag){
                  cout << "yes two numbers exist to give sum "<< x;
                  cout << a[i] << " " << a[j];
                break;
            }

        }
    } 
   
        cout << "no two such numbers exist";
    
}

// two pointer O(N*LOG(N))

bool method2( int a[], int n , int x){
   
    int l = 0 ; int r = n-1;
    sort(a , a+n);
    while(l <r){
        if(a[l]+a[r] == x){
            return 1;
        }
        else if (a[l]+a[r] < x){
            l++;
        }
        else {
            r--;
        }
    }
    return 0;
     
}



// hashing O(N)

void method3(){
    int n ; cin >> n;
    
    int x; cin>>x;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    unordered_set <int> s;
    for(int i = 0  ;i< n ; i++){
        
        s.insert(a[i]);
    }
    for(int i = 0 ; i < n ; i++){
        int temp = x-a[i];
        if(s.find(temp) != s.end()){
            cout << "yes   "  ;
            cout << temp << " " << a[i];
            return ;
        }
    }
    cout << "NO" << endl;
}
int main(){
    // int n ; cin >> n;
    // int x ; cin >> x;
    // int a[n];
    // for(int i = 0 ; i < n ; i++){
    //     cin >> a[i];
    // }
   
//     if(method2(a , n ,x)){
//         cout << "YES" ;
//     }
//     else
//     cout << "NO" << endl;
//    solve();
//     return 0;
 method3();
 return 0;
}
