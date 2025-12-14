#include <iostream>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <cmath>
#include<numeric>
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define pii pair<int,int>
#define vi vector<int>
#define vpi vector<pii>
#define fi first
#define se second
#define debug(x) cerr << #x << " = " << (x) << '\n';
#define sz(x) ((int)(x).size())

using namespace std; 
void solve(){
   long long a,b,n;
   cin>>a>>b>>n;
   if(n==1){
    cout<<1<<endl;
    return;
   }
   if(n*b<=a){
    cout<<1<<endl;
    return;
   }
   if(a<=b){
    cout<<1<<endl;
    return ;
   }
   cout<<2<<endl;
   return ;

}


int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin>>t;
    while (t--){
        solve();
    }

}